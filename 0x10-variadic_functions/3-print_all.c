#include "variadic_functions.h"

/**
 * nll_chk - checks pointer for null
 * @ptr: input pointer
 * Return: returns void
 */
void nll_chk(char *ptr)
{
	if (ptr == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", ptr);
}

/**
 * com_chk - checks for comma print
 * @count: input count
 * Return: returns void
 */
void com_chk(int count)
{
	switch (count)
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
	int j, count;
	va_list args;
	char *ptr;

	va_start(args, format);
	j = count = 0;
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				com_chk(count);
				printf("%c", va_arg(args, int));
				count++;
				break;
			case 'i':
				com_chk(count);
				printf("%i", va_arg(args, int));
				count++;
				break;
			case 'f':
				com_chk(count);
				printf("%f", va_arg(args, double));
				count++;
				break;
			case 's':
			{
				com_chk(count);
				ptr = va_arg(args, char *);
				nll_chk(ptr);
				count++;
			}
		}
		j++;
	}

	printf("\n");
	va_end(args);
return;
}
