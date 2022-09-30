#include <stdio.h>

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
	if (argc < 1)
	{
		return (0);

	}
	printf("%d\n", argc);
	return (0);
}
