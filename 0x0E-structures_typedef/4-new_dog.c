#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Creates a new struct dog.
 * @name: The name of the dog.
 * @age: The age of the dog.
 * @owner: The owner of the dog.
 *
 * Return: Pointer to the newly created dog struct.
 *         NULL if memory allocation fails.
 *
 * Description: This function creates a new struct dog with the provided
 * values for name, age, and owner. It allocates memory for the struct
 * and copies the name and owner strings.
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	int i = 0, j = 0, k;
	dog_t *doge;

	while (name[i] != '\0')
		i++;
	while (owner[j] != '\0')
		j++;
	doge = malloc(sizeof(dog_t));
	if (doge == NULL)
	{
		free(doge);
		return (NULL);
	}
	doge->name = malloc(i * sizeof(doge->name));
	if (doge->name == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
		doge->name[k] = name[k];
	doge->age = age;
	doge->owner = malloc(j * sizeof(doge->owner));
	if (doge->owner == NULL)
	{
		free(doge->owner);
		free(doge->name);
		free(doge);
		return (NULL);
	}
	for (k = 0; k <= j; k++)
		doge->owner[k] = owner[k];
	return (doge);
}
