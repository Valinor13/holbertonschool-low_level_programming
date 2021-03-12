#include "variadic_functions.h"

/**
 * nll_chk - checks pointer for null
 * @ptr: input pointer
 * Return: returns void
 */
void nll_chk(char *ptr)
{
	if (ptr == NULL)
		printf("(nil)");
	else
		printf("%s", ptr);
}

/**
 * com_chk - checks for comma print
 * @j: input posi
 * Return: returns void
 */
void com_chk(int j)
{
	switch (j)
	{
		case 0:
			break;
		default:
			printf(", ");
			break;
	}
return;
}

/**
 * print_all - print any argument
 * @format: input structure
 * Return: returns void
 */
void print_all(const char * const format, ...)
{
	int j;
	va_list args;
	char *ptr;

	if (format != NULL)
	{
		va_start(args, format);
		j = 0;
		while (format[j] != 00)
		{
			switch (format[j])
			{
				case 'c':
					com_chk(j);
					printf("%c", va_arg(args, int));
					break;
				case 'i':
					com_chk(j);
					printf("%i", va_arg(args, int));
					break;
				case 'f':
					com_chk(j);
					printf("%f", va_arg(args, double));
					break;
				case 's':
				{
					com_chk(j);
					ptr = va_arg(args, char *);
					nll_chk(ptr);
					break;
				}
			}
			j++;
		}
	}
	printf("\n");
	va_end(args);
return;
}
