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
	int i;

	i = 0;

	while (*s == *accept)
	{
		i++;
	}

return (i);
}
