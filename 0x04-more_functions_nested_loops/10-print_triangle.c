#include "main.h"

/**
 * print_triangle -  a function that prints triangle, follows by a line.
 * @size: single input line
 *
 */

void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i <= (size - 1); i++)
		{
			for (j = 0; j < (size - 1) - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k <= j; k++)
			{
				_putchar('#');

			}

			_putchar('\n');

		}
	}
}
