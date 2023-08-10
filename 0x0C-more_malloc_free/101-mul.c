#include <stdlib.h>
#include "main.h"
/**
 * _isdigit - Checks if a character is a digit
 * @c: Character to check
 *
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(char c)
{
    return (c >= '0' && c <= '9');
}

/**
 * _strlen - Calculates the length of a string
 * @s: String to calculate length of
 *
 * Return: Length of the string
 */
unsigned int _strlen(char *s)
{
    unsigned int len = 0;

    while (s[len] != '\0')
        len++;

    return len;
}

/**
 * _multiply - Multiplies two positive numbers
 * @num1: First number
 * @num2: Second number
 *
 * Return: Pointer to the result
 */
char *_multiply(char *num1, char *num2)
{
    unsigned int len1, len2, len_res, i, j, carry, product;
    char *result;
    len1 = _strlen(num1);
    len2 = _strlen(num2);
    len_res = len1 + len2;
    result = malloc(sizeof(char) * (len_res + 1));
    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }
    for (i = 0; i < len_res; i++)
        result[i] = '0';
    for (i = len1 - 1; i < len1; i--)
    {
        carry = 0;
        for (j = len2 - 1; j < len2; j--)
        {
            product = (num1[i] - '0') * (num2[j] - '0') + carry + (result[i + j + 1] - '0');
            carry = product / 10;
            result[i + j + 1] = (product % 10) + '0';
        }
        result[i + j + 1] += carry;
    }
    return (result);
}
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    char *num1 = argv[1];
    char *num2 = argv[2];
    for (unsigned int i = 0; num1[i]; i++)
    {
        if (!_isdigit(num1[i]))
        {
            printf("Error\n");
            return (98);
        }
    }
    for (unsigned int i = 0; num2[i]; i++)
    {
        if (!_isdigit(num2[i]))
        {
            printf("Error\n");
            return (98);
        }
    }
    char *result = _multiply(num1, num2);
    printf("%s\n", result);
    free(result);
    return (0);
}
