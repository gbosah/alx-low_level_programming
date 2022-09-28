#include "main.h"
#include <math.h>

/**
 * _pow_recursion -  a function that returns the value of
 * x raised to the power of y
 * @x: parameter that accept input
 * @y: parameter that accept input
 *
 * Return: return value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (pow(x, y));
}
