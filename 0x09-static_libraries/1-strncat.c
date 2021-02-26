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
	int i, z;
	char *p = dest;

	i = _strlen(dest);

	for (z = 0; z < n; i++, z++)
	{
		if (src[z] == '\0')
		{
			break;
		}
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

