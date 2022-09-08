#!/bin/bash

#include <stdio.h>

int main(void)
{
	char a;
	int b;
	long int c;
	long long int  d;
	float e;
	printf("size of a char: %d byte(s)\n", sizeof(char));
	printf("size of a char: %d byte(s)\n", sizeof(int));
	printf("size of a char: %d byte(s)\n", sizeof(long int));
	printf("size of a char: %d byte(s)\n", sizeof(long long int));
	printf("size of a char: %d byte(s)\n", sizeof(float));

	return (0);
}
