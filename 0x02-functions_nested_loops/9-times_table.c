#include "main.h"

/**
 * times_table - a function that prints 9 times table starting with 0
 * @i, j, m: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */

void times_table(void)
{
	int i, j, m;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			m = (j * i);
			if ((m / 10) > 10)
			{
				_putchar((m / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((m % 10) + '0');

			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}

				_putchar('\n');

	}

}
