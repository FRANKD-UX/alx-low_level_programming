#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int num = 0;
	int sign = 1;

	while (*s == ' ' || *s == '\t')
	s++;
	if (*s == '-' || *s == '+')
	{
	if (*s == '-')
	sign = -1;
	s++;
	}
	while (*s >= '0' && *s <= '9')
	{
	num = num * 10 + (*s - '0');
	s++;
	}
	return (num * sign);
}

