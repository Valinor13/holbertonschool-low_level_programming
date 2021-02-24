#include "holberton.h"

/**
 * _strlen_recursion - returns the string length
 * @s: input string
 * Return: returns string length int
 */
int _strlen_recursion(char *s)
{
	if (*s == 00)
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
