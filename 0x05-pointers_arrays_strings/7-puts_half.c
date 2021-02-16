#include "holberton.h"

/**
 * puts_half - replaces the puts() function
 * @str: input string
 *
 * Return: returns void
 */
void puts_half(char *str)
{
	int len, x;

	len = _strlen(str);
	x = (len + 1) / 2;

	while (x <= len - 1)
	{
		_putchar(str[x]);
		x++;
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
