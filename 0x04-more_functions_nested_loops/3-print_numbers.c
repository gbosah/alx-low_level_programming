#include "main.h"
#include <stdio.h>

/**
 * print_numbers - printing from 0 - 9
 *
 *
 * Return: return 1 or 0
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
		_putchar(i);

	_putchar('\n');
}
