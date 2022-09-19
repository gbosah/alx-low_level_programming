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
	int i, len, k;

	len = strlen(str);
	char temp[len];

	for (i = len / 2, k = 0; i <= len; i++, k++)
	{
		temp[k] = str[i];
	}
	printf("%s", temp);
	printf("\n");
}

