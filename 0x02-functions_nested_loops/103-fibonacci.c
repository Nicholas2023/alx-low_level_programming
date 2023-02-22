#include <stdio.h>

/**
 *main- Entry point
 *Description: prints the sum of even fibonacci numbers < 4000000
 *Return: Always 0 (Success)
 */

int main(void)
{
	int a = 1, b = 2, c, sum_even = 2;

	while (b <= 4000000)
	{
		c = a + b;
		a = b;
		b = c;
		if ((b % 2) == 0)
		{
			sum_even += b;
		}
	}
	printf("%d\n", sum_even);
	return (0);
}
