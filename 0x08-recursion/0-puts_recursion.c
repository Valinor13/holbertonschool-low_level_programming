#include "holberton.h"

/**
 * _puts_recursion - print a string followed by a new line with recursion
 * @s: input string
 * Return: returns void
 */
void _puts_recursion(char *s)
{
	if (*s == 00)
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
