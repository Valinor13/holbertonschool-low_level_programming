#include "holberton.h"

/**
 * *_strstr - locate a substring and return
 * @haystack: the source string
 * @needle: the substring
 * Return: returns a pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		for (i = 0; needle[i] != 00; i++)
		{
			if (*needle == *haystack)
			{
				return (haystack);
			}
		}

		haystack++;
	}
return (NULL);
}
