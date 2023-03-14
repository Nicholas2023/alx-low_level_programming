#include "main.h"
#include <stdlib.h>

/**
 * strtow - Entry point
 * Description: Splits a function into words
 * @str: String to be splitted
 *
 * Return: A pointer to the splitted string
 */


int is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}


int count_words(char *str)
{
	int i = 0, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!is_space(str[i]))
		{
			count++;
			for(; !is_space(str[i]) && str[i] != '\0'; i++);
		}
	}
	return (count);
}



char **strtow(char *str)
{
	char **words, *word;
	int i, j, k, len, word_len, l;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	len = count_words(str);

	words = malloc((len + 1) * sizeof(char*));
	if (words == NULL)
	{
		return (NULL);
	}

	j = 0;
	for (i = 0; str[i] != '\0' && j < len;)
	{
		while (is_space(str[i]))
		{
			i++;
		}

		k = i;
		while (!is_space(str[i]) && str[i] != '\0')
		{
			i++;
		}

		word_len = i - k;

		word = malloc(sizeof(char) * (word_len + 1));

		if (word == NULL)
		{
			for (l = 0; l < j; l++)
			{
				free(words[l]);
			}
			free(words);
			return (NULL);
		}

		for (l = 0; l < word_len; l++)
		{
			word[l] = str [k + l];
		}

		word[word_len] = '\0';
		words[j] = word;
		j++;
	}

	words[j] = NULL;
	return (words);
}
