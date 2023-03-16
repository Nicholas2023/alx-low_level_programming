#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an arrays of integers in ascending order
 * @min: The minimum entry
 * @max: The maximum entry
 *
 * Return: A pointer to the created array
 */


int *array_range(int min, int max)
{
	int i, len, *arr;


	if (min > max)
		return (NULL);

	len = (max - min + 1);

	arr = malloc(len * sizeof(int));

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min++;

	return (arr);
}
