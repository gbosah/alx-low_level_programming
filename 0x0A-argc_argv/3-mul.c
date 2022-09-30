#include <stdio.h>
#include <stdlib.h>

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
	int i, sum = 0;

	if (argc < 3)
	{
		puts("Error");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		sum *=  atoi(argv[i]);

		printf("%s\n", argv[i]);
	}
	return (0);
}
