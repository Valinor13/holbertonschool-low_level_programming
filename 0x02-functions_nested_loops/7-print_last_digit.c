#include "holberton.h"

/**
 * print_last_digit - prints the last digit of an input integer
 * @n: n defines the input integer
 * Return: returns the int value of the last digit
 */
int print_last_digit(int n)
{
	int v;

	v = n % 10;

	if (v < 0)
	{
		v = v * -1;
	}

	_putchar(v + '0');

return (v);
}
