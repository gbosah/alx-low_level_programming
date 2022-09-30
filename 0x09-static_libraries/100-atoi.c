#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: return a value
 */
int _atoi(char *s)
{
	int i, j, k, m;

	i = k = 0;
	m = 1;
	while ((*(s + i) < '0' || *(s + i) > '9') && (*(s + i) != '\0'))
	{
		if (*(s + i) == '-')
			m *= -1;
		i++;
	}
	j = i;
	while ((*(s + j) >= '0') && (*(s + j) <= '9'))
	{
		k = k * 10 + m * (*(s + j) - '0');
		j++;
	}
	return (k);
}

