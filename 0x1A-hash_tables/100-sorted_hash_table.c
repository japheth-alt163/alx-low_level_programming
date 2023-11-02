#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * shash_table_create - Creates a sorted hash table
 * @size: The size of the sorted hash table
 *
 * Return: A pointer to the created sorted hash table, or NULL on failure
 */
shash_table_t *shash_table_create(unsigned long int size)
{
    shash_table_t *ht = NULL;
    unsigned long int i;

    /* Allocate memory for the sorted hash table */
    ht = malloc(sizeof(shash_table_t));
    if (!ht)
        return (NULL);

    /* Initialize the size of the sorted hash table */
    ht->size = size;

    /* Allocate memory for the array of linked lists */
    ht->array = malloc(sizeof(shash_node_t *) * size);
    if (!ht->array)
    {
        free(ht);
        return (NULL);
    }

    /* Initialize each element of the array to NULL */
    for (i = 0; i < size; i++)
        ht->array[i] = NULL;

    /* Initialize the sorted linked list */
    ht->shead = NULL;
    ht->stail = NULL;
    return (ht);
}

/**
 * shash_djb2 - Hash function using the djb2 algorithm
 * @str: The input string to be hashed
 *
 * Return: The computed hash value
 */
unsigned long int shash_djb2(const unsigned char *str)
{
    unsigned long int hash = 5381;
    int c;

    /* Compute the hash using the djb2 algorithm */
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c;
    }
    return (hash);
}

/**
 * shash_table_set - Adds or updates a key/value pair in the sorted hash table
 * @ht: The sorted hash table to add the pair to
 * @key: The key to add or update
 * @value: The value associated with the key
 *
 * Return: 1 if successful, 0 if an error occurred
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    shash_node_t *node, *temp;

    if (!ht || !key || strlen(key) == 0 || !value)
        return (0);

    /* Calculate the index for the key */
    index = shash_djb2((unsigned char *)key) % ht->size;

    /* Update the value if the key already exists */
    for (node = ht->array[index]; node; node = node->next)
    {
        if (strcmp(node->key, key) == 0)
        {
            free(node->value);
            node->value = strdup(value);
            return (1);
        }
    }

    /* Create a new node for the key/value pair */
    node = malloc(sizeof(shash_node_t));
    if (!node)
        return (0);

    /* Set the key and value for the new node */
    node->key = strdup(key);
    if (!node->key)
    {
        free(node);
        return (0);
    }
    node->value = strdup(value);
    if (!node->value)
    {
        free(node->key);
        free(node);
        return (0);
    }

    /* Insert the new node into the sorted linked list and the array */
    node->next = ht->array[index];
    ht->array[index] = node;

    temp = ht->shead;
    if (!temp || strcmp(node->key, temp->key) < 0)
    {
        node->snext = temp;
        node->sprev = NULL;
        if (temp)
            temp->sprev = node;
        else
            ht->stail = node;
        ht->shead = node;
        return (1);
    }

    while (temp->snext && strcmp(node->key, temp->snext->key) >= 0)
        temp = temp->snext;

    node->snext = temp->snext;
    node->sprev = temp;
    if (temp->snext)
        temp->snext->sprev = node;
    else
        ht->stail = node;
    temp->snext = node;
    return (1);
}

/**
 * shash_table_get - Retrieves the value associated with a key in the sorted hash table
 * @ht: The sorted hash table to search
 * @key: The key to look up
 *
 * Return: The value associated with the key if found, otherwise NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
    shash_node_t *node;
    unsigned long int index;

    if (!ht || !key)
        return (NULL);

    index = shash_djb2((unsigned char *)key) % ht->size;

    for (node = ht->array[index]; node; node = node->next)
    {
        if (strcmp(node->key, key) == 0)
            return (node->value);
    }

    return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table in key order
 * @ht: The sorted hash table to print
 */
void shash_table_print(const shash_table_t *ht)
{
    shash_node_t *node;
    int first = 1;

    if (!ht)
        return;

    node = ht->shead;
    printf("{");
    while (node)
    {
        if (!first)
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
        first = 0;
        node = node->snext;
    }
    printf("}\n");
}

/**
 * shash_table_print_rev - Prints the sorted hash table in reverse key order
 * @ht: The sorted hash table to print
 */
void shash_table_print_rev(const shash_table_t *ht)
{
    shash_node_t *node;
    int first = 1;

    if (!ht)
        return;

    node = ht->stail;
    printf("{");
    while (node)
    {
        if (!first)
            printf(", ");
        printf("'%s': '%s'", node->key, node->value);
        first = 0;
        node = node->sprev;
    }
    printf("}\n");
}

/**
 * shash_table_delete - Deletes the sorted hash table and its elements
 * @ht: The sorted hash table to delete
 */
void shash_table_delete(shash_table_t *ht)
{
    shash_node_t *node, *temp;

    if (!ht)
        return;

    for (node = ht->shead; node; node = temp)
    {
        temp = node->snext;
        free(node->key);
        free(node->value);
        free(node);
    }

    free(ht->array);
    free(ht);
}
