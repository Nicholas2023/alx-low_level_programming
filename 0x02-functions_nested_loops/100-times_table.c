#include "main.h"

/**
 *print_times_table- Entry point
 *Description: Prints n times table starting with 0
 *@n: The maximum value to print a table for.
 *Return: Number matrix
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			int result = i * j;

			if (j == 0)
				_putchar('0');
			else
			{
				_putchar(' ');
				if (result < 100)
					_putchar(' ');
				if (result < 10)
					_putchar(' ');
			}
			if (result < 10)
				_putchar(result + '0');
			else if (result < 100)
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else
			{
				_putchar(result / 100 + '0');
				_putchar(result / 10 % 10 + '0');
				_putchar(result % 10 + '0');
			}

			if (j < i)
				_putchar(',');
		}
		_putchar('\n');
	}
}
