#include "main.h"

/**
 * cap_string - Entry point
 * Description: Capitalizes all words of a str
 * @str: string to be modified
 * Return: str
 */

char *cap_string(char *str)
{
	int i;
	char prev = ' ';

	for (i = 0; str[i] != '\0'; i++)
	{
		if (prev == ' ' || prev == '\t' || prev == '\n' ||
		prev == ',' || prev == ';' || prev == '.' ||
		prev == '!' || prev == '?' || prev == '"' ||
		prev == '(' || prev == ')' || prev == '{' ||
		prev == '}')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] -= 32;
			}
		}
		prev = str[i];
	}
	return (str);
}

