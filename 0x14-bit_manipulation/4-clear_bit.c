#include "holberton.h"

/**
 * clear_bit - sets bit value at index posi to 0
 * @n: pointer to int n
 * @index: index posi to alter
 * Return: returns 1 for success -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
