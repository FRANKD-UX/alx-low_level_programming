/* factorial.c */
#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number whose factorial is to be computed.
 *
 * Return: Factorial of the number. If n is lower than 0, return -1.
 */
int factorial(int n)
{
	if (n < 0)   /* If the number is negative, return -1 as error */
	{
	return (-1);
	}
	if (n == 0 || n == 1)  /* Base case: factorial of 0 or 1 is 1 */
	{
	return (1);
	}
	return (n * factorial(n - 1));  /* Recursive case */
}

