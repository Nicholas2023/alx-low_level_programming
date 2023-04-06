#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - Converts binary numbers to integers
 * @b: A pointer to the first symbol in binary string
 *
 * Return: Unsigned integer or 0 if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int power = 0, sum = 0, value, i;
	const char *p;

	if (b == NULL)
		return (0);

	p = b;
	while (*p != '\0')
	{
		if (*p != '0' && *p != '1')
			return (0);
		p++;
	}
	p--;

	while (p >= b)
	{
		i = *p - '0';
		value = i * (1 << power);
		sum += value;
		p--;
		power++;
	}
	return (sum);
}
