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
		for (x = 0; x <= 9; x++)
		{
			z = (x * i);

			if (z < 10)
			{
				_putchar(z + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}

			else
			{
				_putchar(z / 10 + '0');
				_putchar(z % 10 + '0');
				_putchar(',');
				_putchar(' ');
			}
		}

		_putchar('\n');
	}
return;
}
