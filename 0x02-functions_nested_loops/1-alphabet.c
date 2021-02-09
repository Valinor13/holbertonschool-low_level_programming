#include "holberton.h"

/**
 * main - Main will return the lowercase alphabet
 *
 * Return: 1 will return failure 0 will return success
 */
void print_alphabet(void)
{
	char abc;

	abc = 'a';

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		_putchar(abc);
	}

	_putchar('\n');

return;
}

