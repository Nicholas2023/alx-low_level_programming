#include <unistd.h>

/**
 * _putchar - writes character c to the stdout
 * @c: Character to be printed
 *
 * Return: 1 on success, -1 on error, then set errno
 * appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
