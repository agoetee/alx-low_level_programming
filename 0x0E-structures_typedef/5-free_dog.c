#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees memory that has been allocated
 * @d: struct dog to free
 *
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
