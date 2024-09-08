#include "main.h"

/**
 * _strcpy - copies a string to another buffer
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: the destination buffer
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while ((*dest++ = *src++))
	;
	return (ptr);
}

