#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: Accepting number
 * Return: returns int
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i, sum = 0;

	va_start(nums, n);


	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(nums);

	return (sum);
}
