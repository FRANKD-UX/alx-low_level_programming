#include "main.h"
#include <stdio.h>
#include <string.h> /* Include string.h for strcat */

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[200]; /* Adjust size as needed */
	char *p;

	/* Initialize the string */
	s[0] = '\0'; /* Start with an empty string */

	/* Concatenate string parts to avoid breaking a single quoted string */
	strcat(s, "ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) ");
	strcat(s, "is a simple letter substitution cipher.\n");

	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");

	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);
	printf("------------------------------------\n");

	p = rot13(s);
	printf("%s", p);
	printf("------------------------------------\n");
	printf("%s", s);

	return (0);
}

