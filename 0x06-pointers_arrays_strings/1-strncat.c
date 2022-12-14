#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: simple  input parameter
 * @src:  simple input parameter
 * @n: uses it as byte for src
 *
 * Return: return char.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = j = 0;

	while (*(dest + i))
	{
		i++;
	}
	while (j < n && *(src + j))
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	if (j < n)
		*(dest + i) = *(src + j);
	return (dest);
}
