#include <unistd.h>


/**
 * _putchar - prints character c in the stdout
 * @c: Character to be printed
 *
 * Return: 1 on success, and -1 on error with errno set appropriately
 */


int _putchar(char c)
{
	return (write(1, &c, 1));
}
