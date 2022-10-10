#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - A function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.,
 *
 * @dest: simple input parameter
 * @src: simple input parameter
 *
 * Return: return a copy of _strcpy
 *
 */

void *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}

/**
 * new_dog - Short description
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the  dog
 *
 * Return: return new_dog
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int i, j;

	for (i = 0; name[i]; i++)
		;
	for (j = 0; owner[j]; j++)
		;
	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	d->name = malloc(i + 1);
	if (!d->name)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(j + 1);
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}
