#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string
 * @accept: the prefix substring
 *
 * Return: the number of bytes in the initial segment of s which consist
 *         only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	char *p;

	while (*s)
	{
	p = accept;
	while (*p && *p != *s)
	p++;
	if (*p == '\0')
	break;
	len++;
	s++;
	}
	return (len);
}

