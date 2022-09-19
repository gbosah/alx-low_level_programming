#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - A function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: simple input parameter
 *
 */

void puts2(char *str)
{
	int i,  len;

	len = strlen(str);

	for (i = 0; i < len; i += 2)
	{
		printf("%c", str[i]);
	}
	printf("\n");
}

