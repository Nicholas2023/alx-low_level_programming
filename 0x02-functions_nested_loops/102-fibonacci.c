#include <stdio.h>

/**
 *main- Entry point
 *Description: Prints the first 50 finobacci numbers
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	int i;

	printf("%d, %d, ", a, b);
	for (i = 1; i <= 48; i++)
	{
		c = a + b;
		printf("%d, ", c);
		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
