#include <unistd.h>

/**
 * _putchar - prints character c to the stdout
 * @c: The character to be printed
 *
 * Return: 1 on success, -1 on error, set errno appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
