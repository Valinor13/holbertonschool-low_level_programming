#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: input string
 *
 * Return: returns void
 */
void print_rev(char *s)
{
	char origStr;
	int len, x, i;

	len = _strlen(*s);
	x = len - 1;

	for (i = 0; i < x; i++)
	{
		origStr = s[i];
		s[i] = s[x];
		s[x] = origStr;
		x--;
	}

	_puts(s);

return;
}
