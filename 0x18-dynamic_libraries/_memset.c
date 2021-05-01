#include "holberton.h"

/**
 * *_memset - a custome memset function
 * @s: input string
 * @b: input character
 * @n: input integer for length of const application
 * Return: returns the updated string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
return (s);
}
