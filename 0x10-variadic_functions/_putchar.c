#include <unistd.h>

/**
 * _putchar - writes a character c to the stdout
 * @c: The character to be printed
 *
 * Return: 1 on success, and -1 on error and set errno appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
