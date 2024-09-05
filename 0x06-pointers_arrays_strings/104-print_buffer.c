#include <stdio.h>
#include <ctype.h>  /* for isprint() */

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of the buffer
 *
 * Description: Prints the content of size bytes of the buffer pointed by b.
 */
void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		/* Print the position in hexadecimal, 8 chars wide */
		printf("%08x: ", i);

		/* Print the hex content, 2 bytes at a time */
		for (j = 0; j < 10; j++)
		{
			if ((i + j) < size)
				printf("%02x", *(b + i + j));
			else
				printf("  ");

			if (j % 2 != 0)
				printf(" ");
		}

		/* Print the character representation of the buffer */
		for (j = 0; j < 10; j++)
		{
			if ((i + j) < size)
			{
				char c = *(b + i + j);
				if (isprint(c))
					printf("%c", c);
				else
					printf(".");
			}
		}

		printf("\n");
	}
}

