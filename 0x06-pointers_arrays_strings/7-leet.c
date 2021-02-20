#include "holberton.h"

/**
 * *leet - converts a string to leet
 * @p: input string
 *
 * Return: returns string in leet
 */
char *leet(char *p)
{
	int i, x;
	char *abc = "aeotlAEOTL";
	char *a23 = "4307143071";

	for (i = 0; p[i] != 00; i++)
	{
		x = 0;
		if ((p[i] == 97) || (p[i] == 101) || (p[i] == 111)
		|| (p[i] == 116) || (p[i] == 108) || (p[i] == 65)
		|| (p[i] == 69) || (p[i] == 79) || (p[i] == 84)
		|| (p[i] == 76))
		{
			while (p[i] != abc[x])
			{
				x++;
			}
			p[i] = a23[x];
		}
	}
return (p);
}
