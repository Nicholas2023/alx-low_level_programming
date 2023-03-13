#include <unistd.h>

/**
 * _putchar - Prints character c to the stdout
 * @c: The character to be printed
 *
 * Return: 1 for success
 * -1 for error, and set errno appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
