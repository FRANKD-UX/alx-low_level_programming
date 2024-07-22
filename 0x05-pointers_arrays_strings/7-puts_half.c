#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints the second half of a string
 * @str: pointer to the string to be printed
 */
void puts_half(char *str)
{
	int len = 0;
	int start;

	/* Find the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Determine the starting index for the second half */
	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2;
		start += 1; /* To print from the middle to the end */
	}

	/* Print the second half of the string */
	for (; str[start] != '\0'; start++)
	{
		_putchar(str[start]);
	}
	_putchar('\n');
}

