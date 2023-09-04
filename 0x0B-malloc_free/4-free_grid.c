#include "main.h"

/**
 * free_grid - free of grid
 * @grid: grid of memory
 * @height: int
 * Return: return void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (; i < height; i++)
		free(grid[i]);
	free(grid);
}
