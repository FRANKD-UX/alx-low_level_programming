#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a new string which is
 * a duplicate of the string str.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if failed
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int i, len;

	/* Return NULL if str is NULL */
	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	for (len = 0; str[len] != '\0'; len++)
		;

	/* Allocate memory for the new string, including space for '\0' */
	dup_str = malloc(sizeof(char) * (len + 1));

	/* Return NULL if malloc fails */
	if (dup_str == NULL)
		return (NULL);

	/* Copy the string */
	for (i = 0; i < len; i++)
		dup_str[i] = str[i];

	/* Add the null terminator */
	dup_str[len] = '\0';

	return (dup_str);
}

