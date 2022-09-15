#include <stdio.h>

/**
 * _isdigit - check the the digit
 * @c: single letter input
 *
 * Return: return 1 or 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
