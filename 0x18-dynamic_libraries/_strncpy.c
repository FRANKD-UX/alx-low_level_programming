#include "main.h"

/**
 * _strncpy - copies a string up to n bytes
 * @dest: the destination buffer
 * @src: the source string
 * @n: the number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n-- && *src)
	*dest++ = *src++;
	while (n-- > 0)
	*dest++ = '\0';
	return (ptr);
}

