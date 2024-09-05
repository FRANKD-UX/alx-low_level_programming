#include "main.h"
#include <stddef.h> /* For NULL */

/**
 * _strpbrk - locates the first occurrence in the string s
 * of any of the bytes in the string accept
 * @s: the string to be searched
 * @accept: the string containing the characters to match
 *
 * Return: pointer to the first occurrence of any of the characters in accept
 * in the string s, or NULL if no such character is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}

	return (NULL); /* Ensure NULL is returned when not found */
}

