#include "holberton.h"

/**
 * print_binary - print in binary
 * @n: input int converted to binary
 * Return: returns void
 */
void print_binary(unsigned long int n)
{
	int i = 63, x = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (i >= 0)
	{
		if (x == 0 && (n >> i) & 1)
			x = 1;
		if (x == 1)
			_putchar((n >> i) & 1 ? '1' : '0');
		i--;
	}
return;
}
