#include "holberton.h"

/**
 * get_bit - returns binary value at index in integer
 * @n: input integer
 * @index: position in integer
 * Return: returns int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);

	return ((n >> index) & 1 ? 1 : 0);
}
