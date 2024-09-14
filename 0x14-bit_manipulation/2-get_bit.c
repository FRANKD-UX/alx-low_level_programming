#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The number to check the bit from.
 * @index: The index of the bit to get.
 *
 * Return: The value of the bit at the index or -1 if error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/* Check if index is greater than the number of bits in unsigned long int */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Right shift n by index and return the value of the least significant bit */
	return ((n >> index) & 1);
}

