#include "main.h"

/**
 * rot13 - encodes a string using ROT13
 * @s: string to encode
 *
 * Return: pointer to the encoded string
 */
char *rot13(char *s)
{
	int i;
	char c;

	for (i = 0; s[i] != '\0'; i++)
	{
		c = s[i];
		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			s[i] = (c - (c >= 'a' ? 'a' : 'A') + 13) % 26 + (c >= 'a' ? 'a' : 'A');
		}
	}

	return (s);
}

