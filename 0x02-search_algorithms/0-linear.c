#include "search_algos.h"

/**
 * linear_search - Search algorithm
 * @array: incoming array to be searched
 * @size: size of array
 * @value: value of item to be found
 * Return: value of array position or -1 on failure
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!(array))
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}