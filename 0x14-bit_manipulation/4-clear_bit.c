#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to set to 0.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* Check if index is valid, i.e., within the bounds of unsigned long int */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* Use bitwise AND with the complement of the bitmask to clear the bit */
	*n = *n & ~(1UL << index);

	return (1);
}

