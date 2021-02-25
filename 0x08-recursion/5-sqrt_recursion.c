#include "holberton.h"

/**
 * _sqrt_recursion - finds the natural square root of an integer
 * @n: integer being passed
 * Return: returns natural square root or -1 for failure
 */

int my_func(int n, int x)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (0);
	}

	else if (x * x > n)
	{
		return (-1);
	}

	else if (x * x == n)
	{
		return (x);
	}

	else
	{
		return (my_func(n, x + 1));
	}
}
int _sqrt_recursion(int n)
{
	return (my_func(n, 1));
}
