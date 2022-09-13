#include "main.h"

/**
 * print_last_digit - a function that prints last digit a number
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */

int print_last_digit(int c)
{

	if (c < 0)
	{
		_putchar(c % 10 + '0');
		return (c % 10);
	}
	return (0);

}
