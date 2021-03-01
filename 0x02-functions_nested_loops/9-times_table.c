#include "holberton.h"

/**
 * times_table - prints the times table through 9
 *
 * Return: returns void
 */
void times_table(void)
{
	int i;
	int x;
	int z;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');

		for (x = 1; x <= 9; x++)
		{
			z = (x * i);

			if (z < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}

			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
			}
		}

		_putchar('\n');
	}
return;
}
