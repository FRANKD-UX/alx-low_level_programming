#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase 10 times,
 * followed by a new line.
 */
void print_alphabet_x10(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 27; j++)
		{
			_putchar(alphabet[j]);
		}
	}
}
