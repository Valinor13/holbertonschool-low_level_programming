#include "holberton.h"

/**
 * swap_int - swapping int values
 * @a: pointer variable a
 * @b: pointer variable b
 *
 * Return: returns void
 */
void swap_int(int *a, int *b)
{
	int arr[2];

	arr[0] = *a;
	arr[1] = *b;

	*a = arr[1];
	*b = arr[0];

return;
}
