#include "main.h"
#include <ctype.h>

/**
 * print_sign - a function that prints n signs
 * @n: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */

int print_sign(int n)
{

	if (n > 0)
	{
		return (1);
		_putchar('+');
	}

	else if (n == 0)
	{
		return (0);
		_putchar('0');
	}

	else
		return (-1);
	_putchar('-');

}
