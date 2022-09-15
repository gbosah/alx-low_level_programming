#include <stdio.h>

/**
 * main - Executable function goes here
 *
 * Return: return 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
			printf("FizzBuzz");
		printf(" ");
		printf("\n");
	}

}
