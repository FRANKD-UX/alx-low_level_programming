#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
	char s[100]; /* Adjust size as needed */
	char *p;

	/* Assign string in parts to avoid splitting quotes */
	s[0] = '\0'; /* Initialize string */
	strcat(s, "Expect the best. Prepare for the worst. ");
	strcat(s, "Capitalize on what comes.\n");

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}

