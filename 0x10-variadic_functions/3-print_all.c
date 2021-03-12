#include "variadic_functions.h"

/**
 * print_all - print any argument
 * @format: input structure
 * Return: returns void
 */
void print_all(const char * const format, ...)
{
	int i, j;
	va_list args;

	va_start(args, format);

	
