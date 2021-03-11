#include "variadic_functions.h"

/**
 * print_numbers - print numbers in an array
 * @separator: the arg seperator
 * @n: input arg count
 * Return: returns void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	i = 0;

	while (i < n)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(args, int));
			if (i != n - 1)
				printf("%s", separator);
		}
		i++;
	}

	printf("\n");
return;
}
