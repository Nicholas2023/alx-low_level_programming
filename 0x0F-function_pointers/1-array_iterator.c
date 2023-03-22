#include "function_pointers.h"


/**
 * array_iterator - Executes a function given as a parameter
 * @array: The array
 * @size: Size of the array
 * @action: A pointer to the function to be executed
 *
 * Return: void
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
