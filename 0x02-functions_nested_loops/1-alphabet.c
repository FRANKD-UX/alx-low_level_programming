#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz\n";
    char *ptr = alphabet;

    while (*ptr)
    {
        _putchar(*ptr);
        ptr++;
    }
}

