#include "main.h"
#include <ctype.h>

/**
 * _isalpha - a function that checks for alpha character
 * @c: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */

int _isalpha(int c)
{

	if (isalpha(c))
		return (1);
	return (0);

}
