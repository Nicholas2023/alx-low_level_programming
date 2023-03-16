#include <stdlib.h>
#include "main.h"

/**
 * _realloc - Reallocates a memory space using malloc and free
 * @ptr: Memory block to be reallocated
 * @old_size: The size in bytes of ptr
 * @new_size: The size in bytes for the new memory block
 *
 * Return: A pointer to the new memory block
 */


void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *mem;
	char *filler, *ptr_copy;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_copy = ptr;
	
	mem = malloc(new_size * sizeof(ptr_copy));

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	filler = mem;

	for (i = 0; i < old_size && i < new_size; i++)
		filler[i] = *ptr_copy++;

	free(ptr);
	return (mem);
}
