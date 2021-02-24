#include "holberton.h"

/**
 * _print_rev_recursion - print a string in reverse
 * @s: input string
 * Return: returns void
 */
void _print_rev_recursion(char *s)
{
	if (*s == 00)
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
