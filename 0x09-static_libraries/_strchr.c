#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: the character to find
 *
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
	if (*s == '\0')
	return (0);
	s++;
	}
	return (s);
}

