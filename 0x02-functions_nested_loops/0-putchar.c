#include "main.h"

/**
 * main - prints "Holberton"
 *
 * Return: 0 and the message on the stdout, on success
 */

int main(void)
{
	char *ch = "_putchar";
		while (*ch)
		{
			_putchar(*ch);
			ch++;
		}
	_putchar('\n');
	return (0);
}
