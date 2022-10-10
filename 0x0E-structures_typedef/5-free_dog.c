#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Short description
 * @d: structure of dog details
 *
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);

}
