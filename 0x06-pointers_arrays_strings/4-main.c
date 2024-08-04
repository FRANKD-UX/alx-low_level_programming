#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints the elements of an array of integers
 * @a: An array of integers
 * @n: The number of elements to print
 *
 * Description: This function prints the elements of the integer array
 * separated by commas and spaces.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		printf("%d", a[i]);
	}
	printf("\n");
}

