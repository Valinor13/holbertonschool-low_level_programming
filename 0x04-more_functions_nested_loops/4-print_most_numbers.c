#include "holberton.h"
 /**
 * print_most_numbers - prints numbers 0 to 9 minus 2 and 4
 *
 * Return: returns void
 */
void print_most_numbers(void)
{
	int x;

	x = 48;

	while (x < 58)
	{
		if (x == 50 || x == 52)
		{
			x++;
		}

		else
		{
			_putchar(x);
			x++;
		}
	}

	_putchar('\n');

return;
}
