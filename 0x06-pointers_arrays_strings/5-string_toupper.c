#include "holberton.h"

/**
 * *string_toupper - lower to uppercase
 * @p: input array
 * Return: returns uppercase array
 */
char *string_toupper(char *p)
{
	int i, len;

	len = _strlen(p);

	for (i = 0; i <= len; i++)
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] = p[i] - 32;
		}
	}

return (p);
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
