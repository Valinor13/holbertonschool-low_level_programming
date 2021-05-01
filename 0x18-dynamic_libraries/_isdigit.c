#include "holberton.h"

/**
 * _isdigit - will return true or false if input is a number
 * @c: c is the input character being tested
 *
 * Return: returns 1 if true and 0 if false
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
