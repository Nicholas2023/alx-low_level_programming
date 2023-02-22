#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 *main- A program that identifies positive, zero and negative integers
 *
 *Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{
	int n;

	srand(time(0));
	n = i;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
		
}
