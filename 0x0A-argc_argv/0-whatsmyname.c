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
	int i;

	for (i = 0; i < argc; i++)
	{

		printf("%s", argv[i]);
	}
	return (0);
}
