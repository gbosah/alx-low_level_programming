#include "main.h"
#include <string.h>
/**
 * _memcpy -  a function that fills memory with a constant byte.
 *
 * @dest: pointer to the destination
 * @src: source of the value
 * @n: Number of bytes to be filled starting from s to be filled.
 *
 * Return: return char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	char *pdest = dest;
	char *psrc = src;

	for (i = 0; i < n; i++)
		pdest[i] = psrc[i];
	return (dest);
}
