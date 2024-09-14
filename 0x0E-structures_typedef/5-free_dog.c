#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated for a dog_t struct.
 * @d: Pointer to the dog_t struct to free.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);  /* Free the name */
	free(d->owner); /* Free the owner */
	free(d);        /* Free the struct itself */
}

