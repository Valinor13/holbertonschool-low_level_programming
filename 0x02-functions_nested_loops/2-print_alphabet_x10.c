#include "holberton.h"

/**
 * print_alphabet_x10 - print the lowercase alphabet 10 times
 *
 * Return: void returns with print statement
 */
void print_alphabet_x10(void)
{
	char abc;
	int i;

	for (i = 0; i < 11; i++)
	{
		for (abc = 'a'; abc <= 'z'; abc++)
		{
			_putchar(abc);
		}

		_putchar('\n');
	}
return;
}
