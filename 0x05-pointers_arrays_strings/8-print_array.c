#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array
 * @a: the array
 * @n: the number of elements to be printed
 *
 * Return: returns void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		printf("%d", a[i]);

		if (i != n - 1)
		{
			printf(", ");
		}

		else
		{
			continue;
		}

	}

	printf("\n");

return;
}
