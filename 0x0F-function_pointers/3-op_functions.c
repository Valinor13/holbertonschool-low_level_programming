#include "3-calc.h"

/**
 * op_add - adds 2 ints
 * @a: int a
 * @b: int b
 * Return: returns integer a+b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts 2 ints
 * @a: int a
 * @b: int b
 * Return: returns a-b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 ints
 * @a: int a
 * @b: int b
 * Return: returns a*b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 ints
 * @a: int a
 * @b: int b
 * Return: returns a/b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}

	else
		return (a / b);
}

/**
 * op_mod - finds the remainder of 2 ints
 * @a: int a
 * @b: int b
 * Return: returns remainder of a/b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}

	else
		return (a % b);
}
