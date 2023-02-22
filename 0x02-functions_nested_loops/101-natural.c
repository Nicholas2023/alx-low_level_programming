#include <stdio.h>

/**
 *main- Entry point
 *Description: Prints the sum of the multiples of 3 and 5
 *Return: Always 0
 */

int main(void)
{
	int total = 0;
	int i;

	for (i = 1; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
		{
			total += i;
		}
	}
	printf("%d\n", total);
	return (0);
}
