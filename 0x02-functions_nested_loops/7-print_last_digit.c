#include "main.h"

/**
 *print_last_digit- Entry point
 *Description: Prints the last digit of a number
 *@n: Function argument
 *Return: modulus of n
 */

int print_last_digit(int n)
{
	int last = (n % 10);

	if (n < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
