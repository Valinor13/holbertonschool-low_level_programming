#include "holberton.h"

/**
 * my_len - finds length of input string
 * @s: input string
 * Return: returns int length
 */
int my_len(char *s)
{
	if (*s == 00)
	{
		return (0);
	}

	return (1 + my_len(s + 1));
}

/**
 * my_pal - checks if a string is a palindrome
 * @s: input string being checked
 * @x: input starting posi
 * @y: ending string posi
 * Return: returns 1 if palindrome 0 if not
 */
int my_pal(char *s, int x, int y)
{
	if (s[x] != s[y])
	{
		return (0);
	}

	else if ((s[x] == s[y]) && (x > y))
	{
		return (1);
	}

	else
		return (my_pal(s, x + 1, y - 1));
}

/**
 * is_palindrome - testing for palindrome
 * @s: the input string being tested
 * Return: returns 1 if a palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int y;

	y = my_len(s);

	return (my_pal(s, 0, y - 1));
}
