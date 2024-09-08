#include "main.h"

/**
 * _strncpy - copies n bytes from a string to another string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to copy
 *
 * Return: the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (n-- && (*dest++ = *src++))
	;
	while (n-- > 0)
	*dest++ = '\0';
	return (ptr);
}

