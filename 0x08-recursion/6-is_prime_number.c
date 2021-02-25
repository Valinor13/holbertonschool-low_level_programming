#include "holberton.h"

/**
 * my_func - will determine if a number is prime
 * @n: input integer from prime tester
 * @x: 2 as a variable
 * Return: returns the prime
 */
int my_func(int n, int x)
{
	if (n % x == 0)
	{
		return (0);
	}

	else if (x > n / 2)
	{
		return (1);
	}

	return (my_func(n, x + 1));
}

/**
 * is_prime_number - test a number for prime
 * @n: input integer being tested
 * Return: returns 1 if prime or 0 if not prime
 */
int is_prime_number(int n)
{
	if (n < 1)
	{
		return (0);
	}

	return (my_func(n, 2));
}
