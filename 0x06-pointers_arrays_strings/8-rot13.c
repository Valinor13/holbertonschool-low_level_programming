#include "holberton.h"
/**
 * *rot13 - encodes a string with rot 13
 * @p: input string
 * Return: returns encoded array
 */
char *rot13(char *p)
{
	int i, x;
	char *j = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *z = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; p[i] != 00; i++)
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
