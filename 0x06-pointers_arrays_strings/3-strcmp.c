#include "holberton.h"

/**
 * _strcmp - compatre two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: returns 0 if equal, - if s1 is less + if s1 is greater
 */
int _strcmp(char *s1, char *s2)
{
	int x, i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			x = 0;
			continue;
		}

		else if (s1[i] != s2[i])
		{
			x = s1[i] - s2[i];
			break;
		}
	}
return (x);
}
