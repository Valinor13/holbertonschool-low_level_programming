#include "holberton.h"

/**
 * *_strcat - appends one string with another string
 * @dest: destination string
 * @src: source string
 *
 * Return: returns a character string
 */
char *_strcat(char *dest, char *src)
{
	int i, x, z;
	char *p = dest;

	x = _strlen(dest) + _strlen(src);

	for (i = 0; dest[i] != '\0'; i++)
	{
		p[i] = dest[i];
	}

	for (z = 0; i <= x; i++, z++)
	{
		p[i] = src[z];
	}

return (p);
}
