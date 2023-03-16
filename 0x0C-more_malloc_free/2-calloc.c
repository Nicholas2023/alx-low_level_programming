#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory of an array
 * @nmemb: Number of elements of the array
 * @size: Size of each element of the array
 *
 * Return: A pointer to the array
 */


void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	char *s1;
	unsigned int i, l;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = (nmemb * size);

	ptr = malloc(l);

	if (ptr == NULL)
		return (NULL);

	s1 = ptr;

	for (i = 0; i < l; i++)
		s1[i] = '\0';

	return (s1);
}
