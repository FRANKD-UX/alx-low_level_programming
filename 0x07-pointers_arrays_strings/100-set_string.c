#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * set_string - sets the value of a pointer to a new string
 * @s: double pointer to the string to be updated
 * @to: the new string to copy
 *
 * Return: Nothing
 */
void set_string(char **s, const char *to)
{
	char *new_string;

	if (*s != NULL)
	{
		free(*s);
	}

	new_string = malloc(strlen(to) + 1);
	if (new_string == NULL)
	{
		*s = NULL;
		return;
	}

	strcpy(new_string, to);
	*s = new_string;
}

