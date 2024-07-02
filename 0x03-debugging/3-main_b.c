#include <stdio.h>
#include "main.h"

/**
 * main - tests print_remaining_days with a leap year date
 * Return: 0
 */
int main(void)
{
	int month = 2;
	int day = 29;
	int year = 2000;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	print_remaining_days(month, day, year);

	return (0);
}

