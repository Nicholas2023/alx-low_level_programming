#include "main.h"

/**
 * print_line - Entry point
 * Description: Draws a straight line in the terminal
 * @n: Carrier integer variable
 * Return: 0
 */

void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
