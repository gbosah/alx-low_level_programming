#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - a function that run other function.
 *
 * @argc: first argument
 * @argv: second argument
 *
 * Return: return 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				puts("Error");
				return (1);
			}
		}
	}



	for (i = 1; i < argc; i++)
	{
		sum +=  atoi(argv[i]);

	}
	printf("%d\n", sum);
	return (0);
}
