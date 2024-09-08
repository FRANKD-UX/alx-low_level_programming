#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * word_count - counts the number of words in a string
 * @str: the string to count words in
 *
 * Return: the number of words in the string
 */
static int word_count(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str != ' ')
		{
			if (!in_word)
			{
				in_word = 1;
				count++;
			}
		}
		else
		{
			in_word = 0;
		}
		str++;
	}

	return (count);
}

/**
 * word_len - calculates the length of a word
 * @str: the start of the word
 *
 * Return: the length of the word
 */
static int word_len(char *str)
{
	int len = 0;

	while (*str && *str != ' ')
	{
		len++;
		str++;
	}

	return (len);
}

/**
 * strtow - splits a string into words
 * @str: the string to split
 *
 * Return: a pointer to an array of strings (words), NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, k, wc, wl;

	if (str == NULL || *str == '\0')
		return (NULL);

	wc = word_count(str);
	if (wc == 0)
		return (NULL);

	words = malloc((wc + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	for (i = 0; i < wc; i++)
	{
		while (*str == ' ')
			str++;

		wl = word_len(str);
		words[i] = malloc((wl + 1) * sizeof(char));
		if (words[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(words[k]);
			free(words);
			return (NULL);
		}

		for (k = 0; k < wl; k++)
			words[i][k] = str[k];
		words[i][k] = '\0';

		str += wl;
	}

	words[wc] = NULL;
	return (words);
}

