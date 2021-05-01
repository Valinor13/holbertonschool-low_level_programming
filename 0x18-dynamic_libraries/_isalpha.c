#include "holberton.h"

/**
 * _isalpha - will return if letter is lowercase or uppercase
 * @c: c is the input character for test
 *
 * Return: returns 1 if letter and 0 if not
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
