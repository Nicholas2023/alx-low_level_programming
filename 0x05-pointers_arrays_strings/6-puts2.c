#include "main.h"

/**
 * puts2 - Entry point
 * Description:  prints every other character of a string
 * starting with the first character
 * @str: String to be printed
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
