#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @str: the string to be converted
 *
 * Return: the pointer to the modified string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	}

	return (str);
}

