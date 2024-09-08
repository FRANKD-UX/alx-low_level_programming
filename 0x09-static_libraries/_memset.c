#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: the memory area
 * @b: the byte to fill
 * @n: the number of bytes
 *
 * Return: the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	*s++ = b;
	return (ptr);
}

