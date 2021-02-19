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

	len = _strlen(p);

	for (i = 0; i < len - 1; i++)
	{
		x = 0;

		if ((p[i] >= 65 && p[i] <= 90) || (p[i] >= 97 && p[i] <= 122))
		{
			while (p[i] != j[x])
			{
				x++;
			}
			p[i] = z[x];
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
