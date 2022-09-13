#include "main.h"

/**
 * print_last_digit - a function that prints last digit a number
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */

int print_last_digit(int c)
{

	int x;
		x = (c % 10);
	if (x < 0)
	{
		x = (-1 * x);
	}
	_putchar(x + 10);
	return (x);
}
