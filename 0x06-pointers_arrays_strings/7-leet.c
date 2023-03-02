#include "main.h"

/**
 * leet - Entry point
 * Description: Encodes a string
 * @str: The string to be encoded
 * Return: code
 */

char *leet(char *str)
{
	int i, j;
	char *code = str;
	char *letter = "aAeEoOtTlL";
	char *num = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; letter[j] != '\0'; j++)
		{
			if (str[i] == letter[j])
			{
				code[i] = num[j];
				break;
			}
		}
	}
	return (code);
}

