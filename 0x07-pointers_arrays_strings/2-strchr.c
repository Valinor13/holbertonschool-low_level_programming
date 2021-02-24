#include "holberton.h"

/**
 * *_strchr - locates a char in a str
 * @s: input string
 * @c: input character being searched for
 * Return: pointer or null char
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == 00)
		{
			return (NULL);
		}

		else if (*s == c)
		{
			return (s);
		}

		s++;
	}
return (0);
}
