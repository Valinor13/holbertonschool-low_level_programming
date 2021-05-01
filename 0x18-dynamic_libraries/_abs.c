#include "holberton.h"

/**
 * _abs - will return the absolute value of an integer
 * @n: int n is the input number being absoluted
 * Return: returns the integer value
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (n * -1);
		return (n);
	}

	else
	{
		return (n);
	}
}
