#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip a num
 * @n: Number to be flipped
 * @m: Number to be formed
 *
 * Return: The number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/*XOR the two numbers to get the bits to be flipped*/

	unsigned long int binary_flip = n ^ m;

	/*Initialize the counter for flipped bits*/

	unsigned int bit_count = 0;

	/*Loop through each bit of XOR result*/

	while (binary_flip > 0)
	{
		/*increment bit_count if the current bit is 1*/

		bit_count += (binary_flip & 1);

		/*Right shift to move to the next bit*/

		binary_flip >>= 1;
	}
	/*Return the final number of flipped bits*/

	return (bit_count);
}
