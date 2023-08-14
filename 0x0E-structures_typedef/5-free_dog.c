#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a struct dog.
 * @d: Pointer to the dog struct to free.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}

