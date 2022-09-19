#include "main.h"
#include <string.h>

/**
 * print_rev - A function that reverse a strings
 *
 * @s: simple input parameter
 *
 */

void print_rev(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = 0; i < len; i++)
	{
		s[i] = s[len - i - 1];
	}
}

