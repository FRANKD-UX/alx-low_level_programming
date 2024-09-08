#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: the size of the array to create.
 * @c: the char to initialize the array with.
 * 
 * Return: a pointer to the array, or NULL if it fails or size is 0.
 */
char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    /* Return NULL if size is 0 */
    if (size == 0)
    {
        return (NULL);
    }

    /* Allocate memory for the array */
    array = (char *)malloc(size * sizeof(char));
    if (array == NULL)
    {
        return (NULL);
    }

    /* Initialize the array with the specific char */
    for (i = 0; i < size; i++)
    {
        array[i] = c;
    }

    return (array);
}

