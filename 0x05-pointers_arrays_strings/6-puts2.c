#include "holberton.h"

/**
 * puts2 - Don't tell a lie on me, I won't tell the truth bout you
 * @str: input string
 *
 * Return: returns void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
return;
}
