#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: the string to print
 *
 * Return: Nothing.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')  /* Base case: end of string */
	{
		putchar('\n');
		return;
	}
	putchar(*s);     /* Print the current character */
	_puts_recursion(s + 1);  /* Recursive call with the next character */
}

