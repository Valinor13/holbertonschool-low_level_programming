#include "holberton.h"

/**
 * _islower - will return if input is lowercase t or f
 * @c: c is an input character testing for lowercase
 *
 * Return: returns 1 if true and 0 if false
 */
int _islower(int c)
{
	if (c < 97 && c > 123)
	{
		return (0);
	}

	else
	{
		return (1);
	}
}
