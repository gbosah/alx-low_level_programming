#include "main.h"
#include <string.h>
/**
 * _strchr -  a function that fills memory with a constant byte.
 *
 * @s: input value
 * @c: input value
 *
 * Return: return char
 */

char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}

		if (!*s)
		{
			return (NULL);
		}
	}


	return (s);
}
