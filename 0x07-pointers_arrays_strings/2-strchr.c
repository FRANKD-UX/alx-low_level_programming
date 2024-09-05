#include "main.h"
#include <stddef.h> /* For NULL */

/**
 * _strchr - locates a character in a string
 * @s: the string to be searched
 * @c: the character to locate
 *
 * Return: pointer to the first occurrence of the character c
 * in the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c) /* Check for the null terminator */
	{
		return (s);
	}

	return (NULL); /* Ensure NULL is returned when not found */
}

