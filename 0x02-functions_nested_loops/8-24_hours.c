#include "main.h"

/**
 * jack_bauer - a function to print 00:00 to 23:59
 * Return: 1 if int c is lowercase, 10 if otherwise
 */

void jack_bauer(void)
{

	int i, j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
		}
	}
}
