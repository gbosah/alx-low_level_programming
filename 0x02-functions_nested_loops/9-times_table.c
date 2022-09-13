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
		for (j = 0; j <= 9; j++)
		{
			m = (i * j);

			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (m >= 10)
			{
				_putchar((m / 10) + '0');
				_putchar((m % 10) + '0');
			}

			else if (m < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((m % 10) + '0');
			}
			else
				_putchar((m % 10) + '0');
		}

				_putchar('\n');

	}

}
