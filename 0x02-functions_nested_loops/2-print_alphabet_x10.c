#include "holberton.h"

/**
 * main - main will print the lowercase alphabet 10 times
 *
 * Return: 1 return failure 0 will return success
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
