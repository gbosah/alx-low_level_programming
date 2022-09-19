#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - A function that reverse a strings
 *
 * @s: simple input parameter
 *
 */

void rev_string(char *s)
{
	int i, len, temp;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
