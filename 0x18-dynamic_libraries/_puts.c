#include "main.h"

/**
 * _puts - Entry point
 * Description:  prints a string, followed by a new line, to stdout.
 * @str: points to the string
 * Return: void
 */

void _puts(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
