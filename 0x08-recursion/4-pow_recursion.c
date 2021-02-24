#include "holberton.h"

/**
 * _pow_recursion - a fuctions that calculates x to the power of y
 * @x: input integer
 * @y: input exponent
 * Return: returns calculated integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}

	else if (y == 0)
	{
		return (1);
	}

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
