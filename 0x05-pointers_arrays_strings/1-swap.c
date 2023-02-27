#include "main.h"

/**
 * swap_int - Entry point
 * Description: swaps values of two integers
 * @a: Interger address value to be swapped
 * @b: integer address value to be swapped
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int var = *a;

	*a = *b;
	*b = var;
}
