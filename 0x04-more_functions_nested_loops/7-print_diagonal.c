#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line of \
 * @n: inputs the data
 *
 * Return: returns void
 */

void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		_putchar('\\');
		_putchar('\n');

		for (y = n - x; y <= n; y++)
		{
			_putchar(' ');
		}

	}

	_putchar('\n');

return;
}
