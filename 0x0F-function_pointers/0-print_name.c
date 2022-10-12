#include <stdio.h>

/**
 * print_name - A function that prints a name
 * @name: A name to print
 * @f: A function pointer
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
