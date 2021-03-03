#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2 dimensional array of integers
 * @width: the first integer
 * @height: the second integer
 * Return: rturns a table of x by y size or null
 */
int **alloc_grid(int width, int height)
{
	int i, j, len;
	int *x, **y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	len = sizeof(int *) * height + sizeof(int) * width * height;

	y = (int **)malloc(len);

	if (y == NULL)
	{
		return (NULL);
	}

	x = (int *)(y + height);

	if (x == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		y[i] = (x + width * i);
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			y[i][j] = 0;
		}
	}

return (y);
}
