#include "holberton.h"

/**
 * *_strcpy - prints a string copy
 * @dest: the destination pointer
 * @src: the source pointer
 *
 * Return: returns dest pointer
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	len = _strlen(src);

	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}

return (dest);
}
