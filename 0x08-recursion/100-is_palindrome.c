#include "main.h"

/**
 * _strlen - Entry point
 * Description: Find the length of a string
 * @s: String to be measured
 *
 *Return: len
 */


int _strlen(char *s)
{
	int len = 0;

	if (*(s + len) != '\0')
	{
		len++;
		len += _strlen(s + len);
	}
	return (len);
}


/**
 * check_palindrome - Entry point
 * Description: Checks if a string is a palindrome
 * @s: String to be checked
 * @len: Length of the string being checked
 * @i: The index of the character being checked
 *
 * Return: 1 if palindrome, 0 if not
 */

int check_palindrome(char *s, int len, int i)
{
	if (s[i] == s[len / 2])
	{
		return (1);
	}
	if (s[i] == s[len - i - 1])
	{
		return (check_palindrome(s, len, i + 1));
	}
	return (0);
}


/**
 * is_palindrome - Entry point
 * Description: Checks if a string is a palindrome
 * @s: String to be checked
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen(s);

	if (!(*s))
	{
		return (1);
	}
	return (check_palindrome(s, len, i));
}
