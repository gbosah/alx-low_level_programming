#include <stdio.h>

/**
 * _isupper - check the uppercase
 * @c: single letter input
 *
 * Return: return 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
