#include "holberton.h"

/**
 * *_strpbrk - returns string from located char
 * @s: s is the input string
 * @accept: accept is the occurrence string
 * Return: returns pointer from acceptance string
 */
char *_strpbrk(char *s, char *accept)
{

	int i;

	while (*s)
	{
		for (i = 0; accept[i] != 00; i++)
		{
			if (accept[i] == *s)
			{
				return (s);
			}
		}

		s++;
	}
return (NULL);
}
