#include "main.h"
#include <stdlib.h>


/**
 * str_concat - Entry point
 * Description: Concatenates two strings
 * @s1: Destination string
 * @s2: Source string
 *
 * Return: A pointer to s3
 */


char *str_concat(char *s1, char *s2)
{
	unsigned int i, j = 0, len = 0;
	char *s3;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		len++;
	}

	s3 = malloc(len * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (i = 0; s1[i] != '\0'; i++)
	{
		s3[j++] = s1[i];
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		s3[j++] = s2[i];
	}
	return (s3);
}
