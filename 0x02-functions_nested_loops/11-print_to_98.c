#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - a function that prints from the number
 * provided to 98
 * @n: single letter input
 * Return: 1 if int c is lowercase, 0 if otherwise
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n < 98; n++)
			printf("%d, ", n);
			printf("%d\n ", n);
	}
	else
		for (n = n; n > 98; n--)
			printf("%d, ", n);
			printf("%d\n ", n);

}
