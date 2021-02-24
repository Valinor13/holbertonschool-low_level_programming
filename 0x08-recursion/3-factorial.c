#include "holberton.h"

/**
 * factorial - prints the factorial of a number
 * @n: the given integer
 * Return: returns int
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
