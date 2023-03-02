#include "main.h"
#include <string.h>

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
	char *alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; str[i] != '\0'; i++)
	{
		char *p = strchr(alpha, str[i]);

		if (p != NULL)
		{
			int index = p - alpha;

			str[i] = rot13[index];
		}
	}

	return (rot_13);
}
