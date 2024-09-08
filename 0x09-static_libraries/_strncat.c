#include "main.h"

/**
 * _strncat - concatenates n bytes of a string to another string
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to concatenate
 *
 * Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest;

	while (*dest)
	dest++;
	while (n-- && *src)
	*dest++ = *src++;
	*dest = '\0';
	return (ptr);

}

