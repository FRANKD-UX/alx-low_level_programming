#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to the array of integers
 * @n: Number of elements in the array
 *
 * Description: This function reverses the elements of the array in place.
 */
void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;
	int temp;

	while (start < end)
	{
		/* Swap elements at start and end */
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;

		/* Move towards the middle */
		start++;
		end--;
	}
}

