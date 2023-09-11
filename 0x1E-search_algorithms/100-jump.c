#include <stdio.h>
#include <math.h>

/**
 * jump_search - Searches for a value in a sorted array of
 * integers using the Jump search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The index of the occurrence of @value in @array
 * Or -1 if @value not found or NULL array
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step, left = 0, right = 0, i;


	if (array == NULL || size == 0)
		return (-1);

	step = (size_t)sqrt(size);

	while (right < size && array[right] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", right, array[right]);
		left = right;
		right += step;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", left, right);

	for (i = left; i <= right && i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
