#include "holberton.h"

/**
 * *cap_string - capitalize all words of a string
 * @p: value of the array
 * Return: returns new array
 */
char *cap_string(char *p)
{
	int i, len;

	len = _strlen(p);

	if (p[0] >= 97 && p[0] <= 122)
	{
		p[0] -= 32;
	}

	for (i = 0; i < len; i++)
	{
		if ((p[i] == 32) || (p[i] == 9) || (p[i] == '\n') || (p[i] == ',') ||
		(p[i] == ';') || (p[i] == '.') || (p[i] == '!') || (p[i] == '?') ||
		(p[i] == '"') || (p[i] == '(') || (p[i] == ')') || (p[i] == '{') ||
		(p[i] == '}'))
		{
			if (p[i + 1] >= 97 && p[i + 1] <= 'z')
			{
				p[i + 1] -= 32;
			}
		}
	}
return (p);
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
