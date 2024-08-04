#include "main.h"

/**
 * _strncat - Concatenates two strings using at most n bytes from src
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of bytes to use from src
 *
 * Description: This function appends the src string to the dest string,
 * using at most n bytes from src. src does not need to be null-terminated
 * if it contains n or more bytes. The resulting string in dest is
 * null-terminated.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	/* Find the end of the dest string */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* Append src to dest, using at most n bytes from src */
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	/* Add the terminating null byte */
	dest[i] = '\0';

	return (dest);
}

