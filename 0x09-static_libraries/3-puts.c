#include "main.h"

/**
 * _puts - Entry point
 * Description:  prints a string, followed by a new line, to stdout.
 * @str: points to the string
 * Return: void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
