#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from n to m.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int count = 0;

	/* XOR n and m to find bits that differ */
	xor_result = n ^ m;

	/* Count the number of set bits in xor_result */
	while (xor_result > 0)
	{
		/* Increment count if the least significant bit is 1 */
		if (xor_result & 1)
			count++;
		/* Right shift xor_result to check the next bit */
		xor_result >>= 1;
	}

	return (count);
}

