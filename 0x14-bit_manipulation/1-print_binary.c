#include "main.h"

/**
 * print_binary - prints the binary representation of a num
 * @n: A decimal number to be printed in binary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	/*Call print_binary function recursively*/

	if (n > 1)
		print_binary(n >> 1);

	/*Print binary using ascii character 0*/

	_putchar((n & 1) + '0');
}
