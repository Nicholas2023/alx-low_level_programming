#include "main.h"
#include <string.h>

/**
 * rev_string - Entry point
 * Description: A function that reverses a string
 * @s: String to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;

	int var;
	int size = strlen(s);

	for (i = 0, j = size - 1; i < j; i++, j--)
	{
		var = s[i];
		s[i] = s[j];
		s[j] = var;
	}
}
