#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string
 * @accept: the set of bytes to find
 *
 * Return: a pointer to the byte in s that matches one of the bytes in
 *         accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s)
	{
	p = accept;
	while (*p)
	{
	if (*s == *p)
	return (s);
	p++;
	}
	s++;
	}
	return (0);
}

