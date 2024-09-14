#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog.
 * @d: pointer to struct dog to print.
 *
 * Description: If an element of d is NULL, it prints (nil) instead of that
 * element. If d is NULL, it prints nothing.
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %f\n", d->age);

		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}

