#include <unistd.h>


/**
 * _putchar - Write character c to stdout
 * @c: The character to be printed
 *
 * Return: 1 for success, -1 for error,
 * Set errno appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
