#include "holberton.h"

/**
 * print_alphabet - print alphabet will return the lowercase alphabet
 *
 * Return: void return print statement
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

