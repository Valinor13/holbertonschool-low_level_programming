#include "holberton.h"

/**
 * *_strstr - locate a substring and return
 * @haystack: the source string
 * @needle: the substring
 * Return: returns a pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	b = needle;

	if (!*b)
	{
		return (haystack);
	}

	for (; *haystack ; haystack++)
	{
		if (*haystack != *b)
		{
			continue;
		}
		a = haystack;

		for (;;)
		{
			if (!*b)
			{
				return (haystack);
			}
			else if (*a++ != *b++)
			{
				break;
			}
		}
		b = needle;
	}
return (NULL);
}
