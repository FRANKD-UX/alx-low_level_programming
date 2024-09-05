#include <stdio.h>
#include "main.h"

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *n1 = "123456789";
	char *n2 = "987654321";
	char r[100];
	char *result;

	result = infinite_add(n1, n2, r, sizeof(r));
	if (result == NULL)
	{
		printf("Error\n");
	}
	else
	{
		printf("%s + %s = %s\n", n1, n2, result);
	}

	return (0);
}

