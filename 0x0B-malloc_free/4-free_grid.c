#include "holberton.h"
#include <stdlib.h>

/**
 * free_grid - frees a dynamic memory pointer
 * @grid: input dynamic pointer
 * @height: another integer to throw me off
 * Return: returns void
 */
void free_grid(int **grid, int height)
{
	(void)height;

	free(grid);

return;
}
