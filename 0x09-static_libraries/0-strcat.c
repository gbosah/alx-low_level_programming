#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 *
 * @dest: simple  input parameter
 * @src:  simple input parameter
 *
 * Return: return char.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;

	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
