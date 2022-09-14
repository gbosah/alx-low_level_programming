#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
* positive_or_negative - tests function that prints if integer is
* positive_or_negative
*
* @i: The input number
*/

void positive_or_negative(int i)
{

	srand(time(0));
	i = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i > 0)
		printf("%d is positive\n", i);
	else
		printf("%d is zero\n", i);
}
