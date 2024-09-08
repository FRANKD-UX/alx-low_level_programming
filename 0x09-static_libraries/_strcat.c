#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*dest)
	dest++;
	while (*src)
	*dest++ = *src++;
	*dest = '\0';
	return (ptr);
}

