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

	for (i = 0; s[i] != 00; i++)
	{
		if (s[i] == c)
		{
			break;
		}

	}

	if (s[i] == 00)
	{
		return (00);
	}

	else
	{
		return (&s[i]);
	}
}
