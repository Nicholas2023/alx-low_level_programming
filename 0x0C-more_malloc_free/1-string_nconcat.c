#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - A string that concatenates two strings
 * @s1: Destination string
 * @s2: Source string
 * @n: Bytes of s2 to be concatenated to s1
 *
 * Return: A pointer to the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		len++;

	s3 = malloc((len + 1) * sizeof(char));

	if (s3 == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i] != '\0'; i++)
		s3[len++] = s1[i];

	for (i = 0; s2[i] != '\0' && i < n; i++)
		s3[len++] = s2[i];

	s3[len] = '\0';

	return (s3);
}



