#include "holberton.h"

/**
 * more_numbers - prints 0 to 14 10x
 *
 * Return: returns void
 */
void more_numbers(void)
{
	int x;
	int y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y < 15; y++)
		{
			if (y >= 10)
			{
				_putchar(49);
			}
			_putchar(y % 10 + '0');
		}
		_putchar('\n');
	}
return;
}
