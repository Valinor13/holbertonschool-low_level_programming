#include "holberton.h"

/**
 * set_bit - set the bit value of an integer at index posi
 * @n: pointer to integer n
 * @index: integer index posi
 * Return: returns integer on success or failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
		return (-1);

	*n = *n | (1 << index);

	return (1);
}
