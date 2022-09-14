#include <stdio.h>

/**
 * main - a function that computes and prints all the
 * multiples of 3 and 5 below 1024
 * Return: (0)
 */

int main(void)
{
	int i, res;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			res += i;
	}
		printf("%d\n", res);
	return (0);
}
