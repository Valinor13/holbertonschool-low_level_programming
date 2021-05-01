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
