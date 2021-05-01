#include "holberton.h"

/**
 * _isupper - will return if letter is uppercase
 * @c: integer value of a character being passed in
 *
 * Return: returns 1 if upper and 0 if else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
