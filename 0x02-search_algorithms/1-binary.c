#include "search_algos.h"

void print_function(int *array, size_t first, size_t last)
{
	size_t i;

	printf("Searching in array: %d", array[first]);

	for (i = 0; i <= last; i++)
	{
		printf(", %d", array[i]);
	}
	putchar('\n');
}

int recursive_function(int *array, size_t first, size_t last, int value)
{
	size_t mid = (last / 2);

	print_function(array, first, last);

	if (first == last)
		return (-1);
	
	if (value < array[mid])
		recursive_function(array, 0, mid, value);
	
	else if (value > array[mid])
		recursive_function(array, mid + 1, last, value);
	
	else
		return (mid);
}

int binary_search(int *array, size_t size, int value)
{
	if (!(array))
		return (-1);
	
	return (recursive_function(array, 0, size - 1, value));
}
