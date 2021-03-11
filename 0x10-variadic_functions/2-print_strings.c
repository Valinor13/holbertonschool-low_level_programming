#include "variadic_functions.h"

/**
 * print_strings - prints strings
 * @separator: the string separator
 * @n: input arg count
 * Return: returns void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *ptr;

	va_start(args, n);
	i = 0;

	while (i < n)
	{
		ptr = va_arg(args, char *);

		if (ptr == NULL)
			printf("(nil)");

		else
		{
			printf("%s", ptr);
			if (separator != NULL && i != n - 1)
				printf("%s", separator);
		}

		i++;
	}

	printf("\n");
return;
}
