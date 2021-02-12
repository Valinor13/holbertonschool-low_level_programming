#include "holberton.h"

/**
 * print_line - print _ line
 * @n: input variable for length of line
 *
 * Return: returns void
 */
void print_line(int n)
{
	int x;

	for (x = 0; x < n; x++)
	{
		_putchar(95);
	}

	_putchar('\n');

return;
}
