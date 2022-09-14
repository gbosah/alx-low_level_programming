#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* positive_or_negative - tests function that prints if integer is
* positive_or_negative
*
* @n: The input number
*/

void positive_or_negative(int n)
{

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
}
