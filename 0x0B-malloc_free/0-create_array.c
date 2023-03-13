#include <stdlib.h>
#include "main.h"


/**
 * create_array - Entry point
 * Description: creates an array of character and
 * intitialize it with a specific character
 * @size: The number of elements of the array
 * @c: The character to initialize the array
 *
 * Return: Apointer to the created array
 */


char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}

	return (arr);
}
