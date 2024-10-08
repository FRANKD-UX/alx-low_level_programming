#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog (dog_t), or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	/* Allocate memory for new dog */
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	/* Allocate and copy name */
	new_name = malloc(strlen(name) + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	strcpy(new_name, name);

	/* Allocate and copy owner */
	new_owner = malloc(strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}
	strcpy(new_owner, owner);

	/* Set the new dog's attributes */
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}

