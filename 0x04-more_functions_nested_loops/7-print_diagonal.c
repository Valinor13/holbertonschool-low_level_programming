#include "holberton.h"

/**
 * print_diagonal - prints a diagonal line of \
 * @n: inputs the data
 * @n: input of integer
 * Return: returns void
 */

void print_diagonal(int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		_putchar('\\');

		if (x != n - 1)
		{
			_putchar('\n');
		}

		else
		{
			continue;
		}

		if (y != n - 1)
		{

			for (y = n - x; y <= n; y++)
			{
				_putchar(' ');
			}
		}

		else
		{
			continue;
		}
	}

	_putchar('\n');

return;
}
