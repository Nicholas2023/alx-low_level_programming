#include "main.h"

/**
 * rot13 - Entry point
 * Description: Encodes a string using ROT-13
 * @str: string to be encoded
 * Return: rot_13
 */

char *rot13(char *str)
{
	int i, j;
	char *rot_13 = str;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			for (j = 0; j < 13; j++)
			{
				str[i]++;
				if (str[i] > 'z')
					str[i] = 'a';
			}
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
		{
			for (j = 0; j < 13; j++)
			{
				str[i]++;
				if (str[i] > 'Z')
					str[i] = 'A';
			}
		}
	}
	return (rot_13);
}
