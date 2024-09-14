#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int printed = 0;

	/* Iterate through each bit */
	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			_putchar('0');
		}
		mask >>= 1;
	}

	/* If no bits were printed, the number is 0 */
	if (!printed)
		_putchar('0');
}

