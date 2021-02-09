#include "holberton.h"

/**
 * _islower - will return if input is lowercase t or f
 * @parameterc: c is an input character testing for lowercase
 *
 * Return: returns 1 if true and 0 if false
 */
int _islower(int c)
{
	if (c <= 'a' && c >= 'z')
	{
		return (0);
	}
return (1);
}
