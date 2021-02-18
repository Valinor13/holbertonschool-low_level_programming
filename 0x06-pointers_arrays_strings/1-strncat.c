
#include "holberton.h"

/**
 * *_strncat - appends one string with another string
 * @dest: destination string
 * @src: source string
 * @n: the integer stop value being passed
 * Return: returns a character string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, x, z;
	char *p = dest;

	x = _strlen(dest) + _strlen(src);

	for (i = 0; i < n; i++)
	{
		if (dest[i] != '\0')
		{
		p[i] = dest[i];
		}
	}

	for (z = 0; i <= x || i < n; i++, z++)
	{
		p[i] = src[z];
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

