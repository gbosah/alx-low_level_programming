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
	int num, num2, num3;

	for (num = 0; num < 9; num++)
	{
		for (num2 = num + 1; num2 < 10; num2++)
		{
			for (num3 = num2 + 1; num3 < 10; num3++)
			{
			putchar((num % 10) + '0');
			putchar((num2 % 10) + '0');
			putchar((num3 % 10) + '0');
		if (num == 7 && num2 == 8 && num3 == 9)
			continue;
		putchar(',');
		putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
