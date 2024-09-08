#include <stdio.h>

/**
 * main - Prints the number of arguments passed to the program.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments (not used in this function).
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
    /* Print the number of arguments excluding the program name */
	(void)argv; /* Explicitly mark argv as unused */
	printf("%d\n", argc - 1);
	return (0);
}

