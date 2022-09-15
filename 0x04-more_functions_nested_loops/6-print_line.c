#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal.
 * @n: single input line
 *
 * Return: return 1 or 0
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_' + '0');

	}
	if (n == 0 || n < 0)
		_putchar('\n');

}
