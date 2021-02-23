#include "holberton.h"

/**
 * *_strchr - locates a char in a str
 * @s: input string
 * @c: input character being searched for
 * Return: pointer or null char
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;

	if (s[i] == 00)
	{
		return (s);
	}

	for (; s[i] != 00; i++)
	{
		if (s[i] == c)
		{
			break;
		}

	}
return (&s[i] + '\0');
}
