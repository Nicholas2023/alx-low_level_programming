#include "main.h"

/**
 * factorial - Entry point
 * Description: Returns the factorial of a given number
 * @n: The number whose factorial is to be found
 *
 * Return: -1 if n < 0; 1 if n is 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
