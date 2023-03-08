#include "main.h"

/**
 * _strlen - Entry point
 * Description: Returns length of strings,
 *		ignoring wildcards'
 * @s: string to be measured
 *
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	if (*(s + i) != '\0')
	{
		if (*s != '*')
		{
			len++;
		}
		i++;
		len += _strlen(s + i);
	}
	return (len);
}


/**
 * iterate_wild - Entry point
 * Description: Iterates through a str having a wildcard,
 *		until it point a non-wildcard character
 * @s1: String to be iterated
 *
 * Return: void
 */

void iterate_wild(char **s1)
{
	if (**s1 == '*')
	{
		(*s1)++;
		iterate_wild(s1);
	}
}

/**
 * postfix_match - Checks if a string str matches the postfix of
 *                 another string potentially containing wildcards.
 * @str: The string to be matched.
 * @pf: The postfix.
 *
 * Return: If str and postfix are identical - a pointer to the null byte
 *                                            located at the end of postfix.
 *         Otherwise - a pointer to the first unmatched character in postfix.
 */
char *postfix_match(char *str, char *pf)
{
	int s_len = _strlen(str) - 1;
	int p_len = _strlen(pf) - 1;

	if (*pf == '*')
		iterate_wild(&pf);

	if (*(str + s_len - p_len) == *pf && *pf != '\0')
	{
		pf++;
		return (postfix_match(str, pf));
	}

	return (pf);
}

/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 *
 * Return: If the strings can be considered identical - 1.
 *         Otherwise - 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
