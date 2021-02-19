#include "holberton.h"

/**
 * *rot13 - encodes a string with rot 13
 * @p: input string
 * Return: returns encoded array
 */
char *rot13(char *p)
{
	int i, x, len;
	char *j = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *z = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	x = 0;
	len = _strlen(p);

	for (i = 0; i < len; i++)
	{
		if (p[i] >= 65 && p[i] <= 90 || p[i] >= 97 && p[i] <= 122)
		{
			while (p[i] != j[x])
			{
				x++
			}
			p[i] = z[x];
		}

		else
		{
			continue;
		}
return (p);
}
