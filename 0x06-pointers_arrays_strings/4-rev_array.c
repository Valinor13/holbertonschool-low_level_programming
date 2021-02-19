#include "holberton.h"

/**
 * reverse_array - reverse the contents of an array
 * @a: the array
 * @n: elements in the array
 * Return: returns void
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i < n; i++, n--)
	{
		tmp = a[i];
		a[i] = a[n - 1];
		a[n] = tmp;

	}

return;
}
