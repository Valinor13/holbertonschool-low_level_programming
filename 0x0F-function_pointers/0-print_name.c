#include "function_pointers.h"

/**
 * print_name - calls functions to print
 * @name: input string
 * @f: input function
 * Return: returns void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == 00)
		return;

	else if (name != NULL)
		f(name);

return;
}
