#include "holberton.h"

/**
 * print_rev - prints a string in reverse
 * @s: input string
 *
 * Return: returns void
 */
void print_rev(char *s)
{
	int i, len;

	len = _strlen(s);

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

return;
}

/**
 * _strlen - return the length of a string
 * @s: input string
 *
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

return (len);
}

