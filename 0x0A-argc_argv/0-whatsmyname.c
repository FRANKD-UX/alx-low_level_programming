#include <stdio.h>

/**
 * main - Prints the name of the program.
 * @argc: Number of command line arguments (not used in this function).
 * @argv: Array of command line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    /* Print the program name */
	(void)argc; /* Explicitly mark argc as unused */
	printf("%s\n", argv[0]);
	return (0);
}

