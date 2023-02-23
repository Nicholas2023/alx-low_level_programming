#include <stdio.h>

/**
 * largest_prime_factor - Entry point
 * Description: finds and prints the largest prime factor of numbers
 * @n: Number to be operated on
 * Return: largest prime factor
 */

unsigned long largest_prime_factor(unsigned long n)
{
	unsigned long i;

	for (i = 2; i <= n; i++)
	{
		if (n % i == 0)
		{
			n /= i;
			i--;
		}
	}
	return (i);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long n = 612852475143;

	printf("%lu\n", largest_prime_factor(n));
	return (0);
}
