#include "function_pointers.h"

/**
 * int_index - search array for integer
 * @array: input array
 * @size: input array size
 * @cmp: input function
 * Return: returns an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, f;

	if (size < 1)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			f = cmp(array[i]);

			if (f != 0)
				return (i);
		}
	}
return (-1);
}
