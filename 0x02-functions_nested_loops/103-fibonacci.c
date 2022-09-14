#include <stdio.h>
/**
  * main - print the fibonacci numbers.
  * Return: Nothing.
  */
int main(void)
{
	unsigned long count, i, j, m, sums;

	i = sums = 0;
	j = 1;
	for (count = 0; count < 50; count++)
	{
		m = i + j;
		i = j;
		j = m;
		if (m % 2 == 0 && m < 4000000)
		{
			sums += m;

		}
		printf("%lu\n", sums);
		return (0);
	}
}
