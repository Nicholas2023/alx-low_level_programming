#include "main.h"
#include <stdlib.h>


/**
 * _strdup - Entry point
 * Description: Returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: String to be copied
 *
 * Return: A pointer to the copied string
 */


char *_strdup(char *str)
{
	char *dup;
	unsigned int i;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		dup[i] = str[i];
	}
	dup[len] = '\0';
	return (dup);
}
