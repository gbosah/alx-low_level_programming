#include "main.h"

/**
 * swap_int - a function that swap variables
 *
 * @a: simple input parameter
 * @b: simple input parameter
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}

