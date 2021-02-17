#include "holberton.h"

/**
 * puts2 - Don't tell a lie on me, I won't tell the truth bout you
 * @str: input string
 *
 * Return: returns void
 */
void puts2(char *str)
{
	int i, len1;

	len1 = _strlen(str);

	for (i = 0; i <= len1 - 1; i += 2)
	{
		_putchar(str[i]);
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
