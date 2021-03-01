#include "holberton.h"

/**
 * print_times_table - prints a times table based on the input
 * @n: input table size up to 15
 * Return: returns void
 */
void print_times_table(int n)
{
	int i, j, z;

	if (n < 0 || n > 15)
		return;
	for (i = 0; i <= n; i++)
	{
		_putchar('0');
		for (j = 1; j <= n; j++)
		{
			z = j * i;
			_putchar(44);
			_putchar(32);
			if (z < 10)
			{
				_putchar(32);
				_putchar(32);
				_putchar(z + '0');
			}
			else if (z >= 10 && z <= 99)
			{
				_putchar(32);
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
			else if (z > 99 && z < 200)
			{
				_putchar(z / 100 + '0');
				_putchar((z - 100) / 10 + '0');
				_putchar((z - 100) % 10 + '0');
			}
			else
			{
				_putchar(z / 100 + '0');
				_putchar((z - 200) / 10 + '0');
				_putchar((z - 200) % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
