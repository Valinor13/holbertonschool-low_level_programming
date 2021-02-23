#include "holberton.h"

/**
 * print_chessboard - prints a chessboard with putchar
 * @a: layout
 * Return: returns void
 */
void print_chessboard(char (*a)[8])
{
	int i, x;

	for (i = 0; i < 8; i++, *a++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar((*a)[x]);
		}

		_putchar('\n');
	}
return;
}
