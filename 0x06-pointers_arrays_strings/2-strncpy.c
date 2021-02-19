#include "holberton.h"

/**
 * *_strncpy - copies a string
 * @dest: destination array
 * @src: source array
 * @n: integer to terminate string copy
 * Return: returns a string pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}

return (dest);
}
