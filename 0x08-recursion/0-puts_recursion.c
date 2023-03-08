#include "main.h"

/**
 * _puts_recursion - Entry point
 * Description: Prints a string followed by a newline
 * @s: String to be printed
 *
 * Return: void
 */


void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
