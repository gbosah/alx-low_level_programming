#include "main.h"
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of the byte
 * @c: input char parameter.
 * Return: return char
 */


char *create_array(unsigned int size, char c)
{
	int *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(c) * size);
	return (0);
	free(ptr);
}
