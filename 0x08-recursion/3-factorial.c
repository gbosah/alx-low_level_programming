#include "main.h"
#include <stdio.h>

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: parameter that accept input
 *
 * Return: return value
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
	return (0);
	return (n * factorial(n - 1));
}
