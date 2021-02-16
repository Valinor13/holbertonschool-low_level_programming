#include "holberton.h"

/**
 * rev_string - reverses the string of the input
 * @s: takes an input string
 *
 * Return: returns void
 */
void rev_string(char *s)
{
	int i, x, len;
	char tmp;

	len = _strlen(s);

	for (i = 0, x = len - 1; i < x; i++, x--)
	{
		tmp = s[i];
		s[i] = s[x];
		s[x] = tmp;
	
	}
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
