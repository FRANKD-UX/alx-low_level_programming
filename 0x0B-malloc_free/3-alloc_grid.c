#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2D array of integers.
 * @width: the width of the array
 * @height: the height of the array
 *
 * Return: pointer to 2D array of integers, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	/* Allocate memory for the rows (array of pointers) */
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
		return (NULL);

	/* Allocate memory for each column and initialize elements to 0 */
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			/* Free previously allocated memory if malloc fails */
			for (j = 0; j < i; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}
		/* Initialize all elements to 0 */
		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}

	return (grid);
}

