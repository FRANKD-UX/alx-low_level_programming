#include <stdio.h>
#include "main.h"

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two-dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void print_grid(int **grid, int width, int height)
{
	int w;
	int h;

	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			printf("%d ", grid[h][w]);
		}
		printf("\n");
	}
}

