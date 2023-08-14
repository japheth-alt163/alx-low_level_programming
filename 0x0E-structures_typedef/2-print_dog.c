#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints information about a struct dog.
 * @d: Pointer to the struct dog to print.
 *
 * Description: This function prints the information about a struct dog,
 * including its name, age, and owner. If any element of d is NULL, it
 * prints "(nil)" instead of that element.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name != NULL)
		{
			printf("Name: %s\n", d->name);
		}
		else
		{
			printf("Name: (nil)\n");
		}
		printf("Age: %f\n", d->age);
		if (d->owner)
		{
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Owner: (nil)\n");
		}
	}
}
