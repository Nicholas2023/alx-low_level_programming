#include "function_pointers.h"

/**
 * int_index - Searches for an integer
 * @array: The array to be searched
 * @size: Size of the array to be searched
 * @cmp: A pointer to the function to search an integer
 *
 * Return: i on a successful match, and -1 on failed match
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
