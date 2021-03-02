#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - function concatenates two strings
 * @s1: alpha string
 * @s2: omega string
 * Return: returns a pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, x, j, z, y;

	i = 0;
	x = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[i] != 00)
	{
		i++;
	}

	while (s2[x] != 00)
	{
		x++;
	}

	z = i + x + 1;

	s = malloc(z * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (j = 0; j < i; j++)
	{
		s[j] = s1[j];
	}

	for (y = 0; y <= x; j++, y++)
	{
		s[j] = s2[y];
	}

return (s);
}
