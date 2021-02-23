#include "holberton.h"

/**
 * _strspn - gets the lenth of a prefix substring
 * @s: input string
 * @accept: 2nd input string
 *
 * Return: returns unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, x;

	x = 0;

	while (*s)
	{
		for (i = 0; accept[i] != 00; i++)
		{
			if (accept[i] == *s)
			{
				break;
			}
		}

		if (accept[i] != 00)
		{
			x++;
		}

		else
		{
			break;
		}

		s++;
	}

return (x);
}
