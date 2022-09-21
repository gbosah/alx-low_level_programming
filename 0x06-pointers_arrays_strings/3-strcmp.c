#include "main.h"

/**
 * _strcmp - a function that concatenates two strings.
 *
 * @s1: string one to compare
 * @s2: string two to compare
 *
 * Return: return int.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}
