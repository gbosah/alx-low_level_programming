#include "function_pointers.h"
#include <stddef.h>

/**
 * int_index -   a function that searches for an integer.
 * @array: An array
 * @size: size of the array
 * @cmp: function pointer
 *
 * Return: return int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, r;

	if (size > 0 && array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			r = cmp(array[i]);

			if (r)
				break;
		}
		if (i < size)
			return (i);
	}
	return (-1);
}
