#include <stdio.h>

/**
 * main - Demonstrates the use of pointers to modify an array indirectly.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	printf("a[2] = %d\n", a[2]);
	return (0);
}

