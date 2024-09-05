#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * leet - encodes a string into 1337 (leet)
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *s)
{
	int i, j;
	char *letters = "aAeEoOtTlL";
	char *leet_chars = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = leet_chars[j];
				break;
			}
		}
	}

	return (s);
}

