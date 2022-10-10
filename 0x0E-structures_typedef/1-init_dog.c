#include "dog.h"

/**
 * init_dog - Short description
 * @d: structure of dog details
 * @name: Name of dog
 * @age: Age of dog
 * @owner: owner of the dog
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}

}
