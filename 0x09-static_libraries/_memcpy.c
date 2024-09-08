#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: the destination buffer
 * @src: the source buffer
 * @n: the number of bytes to copy
 *
 * Return: the destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
	*dest++ = *src++;
	return (ptr);
}

