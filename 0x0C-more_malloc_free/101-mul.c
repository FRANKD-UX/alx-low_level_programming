#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * is_digit_string - Checks if a string is composed of digits only.
 * @str: The string to check.
 *
 * Return: 1 if the string is composed of digits only, 0 otherwise.
 */
int is_digit_string(char *str)
{
	while (*str)
	{
		if (!isdigit(*str))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

/**
 * main - Multiplies two positive numbers.
 * @argc: The number of arguments.
 * @argv: The arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	long num1;
	long num2;
	long result;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (!is_digit_string(argv[1]) || !is_digit_string(argv[2]))
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);
	result = num1 * num2;

	printf("%ld\n", result);
	return (0);
}

