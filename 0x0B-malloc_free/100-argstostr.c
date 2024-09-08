#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments
 * @av: array of argument strings
 *
 * Return: pointer to the new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
	char *result;
	int i, j, k, length;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the length of the new string */
	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			length++;
		length++; /* For the newline character */
	}
	length++; /* For the null terminator */

	/* Allocate memory for the new string */
	result = malloc(length * sizeof(char));
	if (result == NULL)
		return (NULL);

	/* Copy arguments into the new string */
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			result[k++] = av[i][j];
		result[k++] = '\n'; /* Add newline character after each argument */
	}
	result[k] = '\0'; /* Null terminator */

	return (result);
}

