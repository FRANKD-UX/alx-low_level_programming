/* _strlen_recursion.c */
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion.
 * @s: The string whose length is to be determined.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')  /* Base case: End of string */
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));  /* Recursive case */
}

