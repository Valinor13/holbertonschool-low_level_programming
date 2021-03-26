#include "holberton.h"

/**
 * flip_bits - count the number of bits needing flipped to change integer value
 * @n: first input value for comparison
 * @m: second input value for comparison
 * Return: returns an unsigned int of new value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int Q;
	unsigned int count;
	int i = 63;

	Q = n ^ m;
	count = 0;
	while (i >= 0)
	{
		if ((Q >> i) & 1)
			count++;
		i--;
	}

return (count);
}
