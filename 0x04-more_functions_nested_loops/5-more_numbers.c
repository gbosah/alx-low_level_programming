#include "main.h"

/**
 * more_numbers - printing from 0 - 9
 *
 *
 * Return: return 1 or 0
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; i++)
		{

			_putchar(j + '0');
		}
		_putchar('\n');
	}
	_putchar('\n');

}
