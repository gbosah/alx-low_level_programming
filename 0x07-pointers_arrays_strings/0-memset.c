#include "main.h"

/**
 * _memset -  a function that fills memory with a constant byte.
 *
 * @s: pointer to the destination
 * @b: value to be filled
 * @n: Number of bytes to be filled starting from s to be filled.
 *
 * Return: return char
 */

char *_memset(char *s, char b, unsigned int n)
{
	 char *p = s;

	while (n--)
	{
		*p++ = (char) b;
	}
	return (s);
}
