#include "main.h"
#include <stdio.h>
#include <string.h> /* Include for strcat */

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[256] = "";  /* Buffer to hold the concatenated string */
	char part1[] =
		"ROT13 (\"rotate by 13 places\", sometimes hyphenated ROT-13) ";
	char part2[] =
		"is a simple letter substitution cipher.\n";
	char *p;

	/* Concatenate strings using strcat */
	strcat(s, part1);
	strcat(s, part2);

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

