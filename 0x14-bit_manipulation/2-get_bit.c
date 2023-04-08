#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index
 * @n: Number whose binary is to be returned
 * @index: Index of the bit to be returned
 *
 * Return: -1 for error ,or the bit of the binary
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int nick;

	/*Check if the index is within range*/

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	/*Check if bit at the stated index is set*/

	nick = (1UL << index);

	return ((n & nick) != 0);
}
