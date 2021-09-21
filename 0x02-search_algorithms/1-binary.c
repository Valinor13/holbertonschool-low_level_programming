#include "search_algos.h"

/**
 * print_function - prints the incoming array
 * @array: incoming array
 * @first: first character to print
 * @last: last character to print
 * Return: returns void
 */

void print_function(int *array, size_t first, size_t last)
{
	size_t i;

	printf("Searching in array: %d", array[first]);

	for (i = first + 1; i <= last; i++)
	{
		printf(", %d", array[i]);
	}
	putchar('\n');
}

/**
 * recursive_function - splits the array down to 1
 * @array: incoming array
 * @first: first character of new split
 * @last: last character of new split
 * @value: value of item being searched for
 * Return: returns index of value or -1 for failure
 */

int recursive_function(int *array, size_t first, size_t last, int value)
{
	size_t mid = ((first + last) / 2);

	print_function(array, first, last);

	if (first > last)
		return (-1);

	if (value == array[mid])
		return ((int)mid);

	else if (value > array[mid])
		return (recursive_function(array, mid + 1, last, value));

	else
		return (recursive_function(array, first, mid - 1, value));
}

/**
 * binary_search - determines if array has items before calling recursion
 * @array: incoming array
 * @size: size of array
 * @value: value of item being searched for
 * Return: returns index of value or -1 for failure
 */

int binary_search(int *array, size_t size, int value)
{
	if (!(array))
		return (-1);

	return (recursive_function(array, 0, size - 1, value));
}
