#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints every number on the way to 98
 * @n: integer value input
 * Return: returns nothing. prints statement
 */
void print_to_98(int n)
{
	int v;

	v = 98;

	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}

	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}

	printf("%d\n", v);

return;
}
