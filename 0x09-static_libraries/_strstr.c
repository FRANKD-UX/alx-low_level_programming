#include "main.h"

/**
 * _strstr - finds the first occurrence of a substring
 * @haystack: the string to search
 * @needle: the substring to find
 *
 * Return: a pointer to the beginning of the located substring, or NULL
 *         if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *p1;
	char *p2;

	while (*haystack)
	{
	p1 = haystack;
	p2 = needle;

	while (*p2 && *p1 == *p2)
	{
	p1++;
	p2++;
	}
	if (*p2 == '\0')
	return (haystack);
	haystack++;
	}
	return (0);
}

