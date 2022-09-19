#include "main.h"
#include <stdio.h>
#include <string.h>

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

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (*src != '\0')
	{
		dest[index] = *src;
		index++;
		src++;
	}

	return (dest);
}

