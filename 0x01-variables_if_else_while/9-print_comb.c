#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num++);
		if (num == 58)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
