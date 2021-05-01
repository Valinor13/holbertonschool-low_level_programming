#include "holberton.h"

/**
 * _puts - replaces the puts() function
 * @str: input string
 *
 * Return: returns void
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
return;
}
