#include "holberton.h"

/**
 * array_range - creates an array of ints
 * @min: int min
 * @max: int max
 * Return: returns an int pointer
 */
int *array_range(int min, int max)
{
	int i;
	int *p;

	if (min > max)
		return (NULL);

	p = (int *)malloc((max - min + 1) * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; min <= max; min++, i++)
	{
		p[i] = min;
	}

return (p);
}
