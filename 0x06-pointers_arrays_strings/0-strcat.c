#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Description: This function appends the src string to the dest string,
 * overwriting the terminating null byte at the end of dest, and then
 * adds a terminating null byte.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	/* Find the end of the dest string */
	for (i = 0; dest[i] != '\0'; i++)
		;

	/* Append src to dest */
	for (j = 0; src[j] != '\0'; j++, i++)
	{
		dest[i] = src[j];
	}

	/* Add the terminating null byte */
	dest[i] = '\0';

	return (dest);
}

