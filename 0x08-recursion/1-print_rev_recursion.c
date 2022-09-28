#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _print_rev_recursion -  a function that prints a string in reverse.
 * @s: parameter that accept input
 */

void _print_rev_recursion(char *s)
{
	int i, len;

	len = strlen(s);

	for (i = 0; i < len; i++)
		printf("%d", (s[i] - i - 1));
}
