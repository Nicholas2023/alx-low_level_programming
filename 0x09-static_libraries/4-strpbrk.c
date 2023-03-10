#include "main.h"

/**
 * _strpbrk - Entry point
 * Description: Locates the first occurrence in string s
 * of any of the bytes in string accepts
 * @s: String to be searched
 * @accept: The set of bytes to be searched
 * Return: If a set is matched a pointer to the matched byte
 * if no set is matched - NULL
 */


char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
