#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index
 * @n: A pointer to the number whose bit should be reset
 * @index: The binary index of n to be reset
 *
 * Return: 1 on success and -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	/*Check if the index is within the binary range*/

	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/*Set the bit at the required index to 1*/

	*n = *n | (1 << index);

	return (*n);
}
