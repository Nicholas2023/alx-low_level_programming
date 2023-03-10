#include <unistd.h>

/**
 * _putchar - print the c character in stdout
 * @c: Character to be printed
 *
 * Return: 1 on success, -1 on error and set errno appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
