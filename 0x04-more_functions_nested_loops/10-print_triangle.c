#include "holberton.h"

/**
 * print_triangle - printing right triangles
 * @size: inputs the size of the triangle
 *
 * Return: returns void
 */
void print_triangle(int size)
{
	int x, y, z;

	for (x = 0; x < size; x++)
	{

		for (y = x + 1; y < size; y++)
		{
			_putchar(' ');
		}

		for (z = size - x; z <= size; z++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}

	if (size <= 0)
	{
		_putchar('\n');
	}
return;
}
