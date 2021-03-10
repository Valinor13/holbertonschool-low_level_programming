#include "function_pointers.h"

/**
 * array_iterator - adding a loop to the function calls
 * @array: input array
 * @size: input length of array
 * @action: input function
 * Return: returns void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
return;
}
