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
	int i;

	i = 0;

	while (i < n && (src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		*(dest + i) = '\0';
		i++;
	}
	return (dest);
}
