#include "holberton.h"

/**
 * print_number - prints an int
 * @n: input integer
 *
 * Return: returns void
 */
void print_number(int n)
{
	int x, z;

	x = 1;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	while (x * 10 <= n)
	{
		x = x * 10;
	}

	while (x != 0)
	{
		z = n / x;
		_putchar(z + '0');
		n = n - z * x;
		x = x / 10;
	}

return;
}
