#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - copies a string into the heap
 * @str: input string
 * Return: returns a pointer or NULL
 */
char *_strdup(char *str)
{
	char *s;
	int i, x;

	x = 1;

	for (i = 0; str[i] != 00; i++)
	{
		x++;
	}

	s = malloc(x * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != 00; i++)
	{
		s[i] = str[i];
	}

return (s);
}
