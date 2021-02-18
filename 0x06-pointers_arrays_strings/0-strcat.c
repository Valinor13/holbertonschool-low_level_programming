#include "holberton.h"

/**
 * *_strcat - appends one string with another string
 * @dest: destination string
 * #src: source string
 *
 * Return: returns a character string
 */
char *_strcat(char *dest, char *src)
{
	int i, len;

	len = _strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len + 1] = src[i];
	}

	dest[len + 1] = '\0';

return (dest);
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

