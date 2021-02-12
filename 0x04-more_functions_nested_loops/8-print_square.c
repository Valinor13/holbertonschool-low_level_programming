#include "holberton.h"

/**
 * print_square - printing a square
 * @size: size is the input size of the square
 *
 * Return: returns void
 */
void print_square(int size)
{
	int x, y;

	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar(35);
		}

		_putchar('\n');
	}
return;
}
