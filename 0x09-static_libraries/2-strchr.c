#include <stdlib.h>
#include "holberton.h"

/**
 * *_strchr - locates a char in a str
 * @s: input string
 * @c: input character being searched for
 * Return: pointer or null char
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		if (*s == 00)
		{
			return (NULL);
		}

		s++;
	}
return (s);
}
