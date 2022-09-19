#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - A function that prints half a string,
 *
 * @str: simple input parameter
 *
 */

void puts_half(char *str)
{
	int i, len;

	len = strlen(str);

	for (i = len / 2; i < len; i++)
	{
		printf("%c", str[i]);

		if (len % 2 != 0)
		{
			printf("%c", str[(len - 1) / 2]);
		}
	}
	printf("\n");
}

