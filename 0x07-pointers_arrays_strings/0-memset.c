#include "main.h"
#include <string.h>


/**
 * _memset - Entry point
 * @s: pointer to fill with constant value.
 * @b: The constant value to fill
 * @n: Maximum bytes to use
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, sizeof(char) * n);

	return (s);
}
