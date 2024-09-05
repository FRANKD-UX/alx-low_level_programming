#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - Adds two large numbers represented as strings.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: Pointer to the result or NULL if buffer is too small.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0, sum, i, j, k;

	/* Ensure buffer is large enough */
	if (size_r <= (len1 > len2 ? len1 : len2) + 1)
		return (NULL);

	r[size_r - 1] = '\0'; /* Null-terminate the result */
	i = len1 - 1;
	j = len2 - 1;
	k = size_r - 2;

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i--] - '0';
		if (j >= 0)
			sum += n2[j--] - '0';

		carry = sum / 10;
		r[k--] = (sum % 10) + '0';
	}

	if (k < 0)
		return (NULL); /* Not enough space in the buffer */

	/* Move result to the beginning of the buffer */
	memmove(r, r + k + 1, size_r - k - 1);

	return (r);
}

