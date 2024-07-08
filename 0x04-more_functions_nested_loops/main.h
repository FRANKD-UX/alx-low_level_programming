#ifndef MAIN_H
#define MAIN_H

/*
 * Function prototypes
 */

/**
 * _isupper - Checks for uppercase character.
 * @c: The character to check.
 * Return: 1 if c is uppercase, 0 otherwise.
 */
int _isupper(int c);

/**
 * someFunction - A placeholder function.
 */
void someFunction(void);

/**
 * _isdigit - Checks for a digit (0 through 9).
 * @c: The character to check.
 * Return: 1 if c is a digit, 0 otherwise.
 */
int _isdigit(int c);

/**
 * mul - Multiplies two integers.
 * @a: The first integer.
 * @b: The second integer.
 * Return: The result of the multiplication.
 */
int mul(int a, int b);

/**
 * _putchar - Writes a character to stdout.
 * @c: The character to write.
 * Return: On success, 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c);

/**
 * print_numbers - Prints the numbers from 0 to 9.
 */
void print_numbers(void);

/**
 * print_most_numbers - Prints the numbers from 0 to 9 except 2 and 4.
 */
void print_most_numbers(void);

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14.
 */
void more_numbers(void);

/**
 * print_line - Draws a straight line in the terminal.
 * @n: The number of times the character _ should be printed.
 */
void print_line(int n);

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: The number of times the character \ should be printed.
 */
void print_diagonal(int n);

/**
 * print_square - Prints a square of size n.
 * @size: The size of the square.
 */
void print_square(int size);

/*
 * Constants or macros
 */
#define MAX_SIZE 100

#endif /* MAIN_H */

