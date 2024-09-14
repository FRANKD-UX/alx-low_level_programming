#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: This struct defines a dog's basic information.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/* Define dog_t as a new type for struct dog */
typedef struct dog dog_t;

/* Function prototypes */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */

