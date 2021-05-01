#include "holberton.h"

/**
 * *_memcpy - copies memory area
 * @dest: destination pointer
 * @src: source pointer
 * @n: area size
 * Return: returns destination pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
return (dest);
}
