#include "main.h"

/**
 * _strncat - concatenates two strings up to n bytes
 * @dest: the destination string
 * @src: the source string
 * @n: the number of bytes to concatenate
 *
 * Return: pointer to the resulting string dest
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

