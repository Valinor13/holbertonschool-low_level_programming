#include <stdio.h>

/**
 * main - This is a description of my main function
 *
 * Return: 0 for success
 */
int main(void)
{
	int num1;

	for(num1 = 0; num1 < 10; num1++)
	{
		putchar(num1 + '0');
		putchar(',');
		putchar(' ');
	}

	putchar('$');
return (0);
}
