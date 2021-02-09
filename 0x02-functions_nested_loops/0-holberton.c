#include "holberton.h"

/**
 * main - The main will print holberton
 *
 * Return: Return 1 for failure 0 for success
 */
int main(void)
{
	char arr[9];
	int i;

	arr[0] = 'H';
	arr[1] = 'o';
	arr[2] = 'l';
	arr[3] = 'b';
	arr[4] = 'e';
	arr[5] = 'r';
	arr[6] = 't';
	arr[7] = 'o';
	arr[8] = 'n';

	for (i = 0; i < 10; i++)
	{
		_putchar(arr[i]);
	}

	_putchar('\n');

return (0);
}
