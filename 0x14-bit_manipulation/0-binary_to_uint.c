#include "holberton.h"

/**
 * binary_to_uint - converting binary to unsigned integer
 * @b: input binary
 * Return: returns unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, x = 0, len = 0, tmpx;
	const char *bina = b;

	if (b == NULL)
		return (0);

	while (bina[len])
		len++;

	while (*bina)
	{
		tmpx = 0;
		if (*bina == '1')
		{
			i = len - 1;
			if (*(bina + 1) != 00)
				tmpx += 2;
			while (!(i < 2))
			{
				tmpx *= 2;
				i--;
			}
			x += tmpx;
		}

		else if (*bina != '0' && *bina != '1')
			return (0);

		len--;
		bina++;
	}
	if (*(bina - 1) == '1')
		x += 1;
return (x);
}
