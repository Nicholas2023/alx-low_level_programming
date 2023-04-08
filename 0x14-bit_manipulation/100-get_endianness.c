#include "main.h"


/**
 * get_endianness - Checks the endianness
 *
 * Return: 0 if big endian and -1 if little endian
 */


int get_endianness(void)
{
	int p = 1;
	char *address = (char *) (&p);

	if (*address == 1)
		return (1);

	return (0);
}
