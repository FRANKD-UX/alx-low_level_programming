#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char part1[] = "Expect the best. Prepare for the worst. ";
	char part2[] = "Capitalize on what comes. hello world! ";
	char part3[] = "hello-world 0123456hello world\t";
	char part4[] = "hello world.hello world\n";
	char str[200];
	char *ptr;

	snprintf(str, sizeof(str), "%s%s%s%s", part1, part2, part3, part4);
	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}

