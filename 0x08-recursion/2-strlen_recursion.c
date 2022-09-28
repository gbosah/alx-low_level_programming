#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strlen_recursion - a function that prints a string, followed by a new line.
 * @s: parameter that accept input
 * Return: return (0)
 */

int _strlen_recursion(char *s)
{
	int len = strlen(s);

	putchar(len);

	return (0);
}
