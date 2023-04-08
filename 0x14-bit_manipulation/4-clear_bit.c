#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at an index
 * @n: A pointer to the binary number to be set to 0
 * @index: The binary index to be set to 0
 *
 * Return: 1 on success and -1 on error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	/*Check if the index is within the required range*/

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/*Set the bit to 0 at the requested index*/

	*n &= ~(1UL << index);

	return (1);
}
