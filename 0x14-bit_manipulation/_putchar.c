#include <unistd.h>

/**
 * _putchar - Writes the character c to the stdout
 *@c: The character to be printed
 *
 * Return: 1 on success, -1 on error
 * then set the errno. appropriately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
