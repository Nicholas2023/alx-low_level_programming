#include <stdio.h>
#include <stddef.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 *			using the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index of the first of @value in @array,
 * Or -1 if not found or a NULL array
 */

int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid, i;


	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;
		printf("Searching in array: ");

		for (i = left; i <= right; i++)
		{
			if (i != right)
				printf("%d, ", array[i]);
			else
				printf("%d\n", array[i]);
		}

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
