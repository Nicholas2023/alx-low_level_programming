#include "main.h"
#include <string.h>

/**
 * print_rev - Entry point
 * Description: Prints a string in reverse followed by a newline
 * @s: String to be printed
 * Return: void
 */

void print_rev(char *s)
{
	int size = strlen(s);
	int i;

	for (i = size - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
