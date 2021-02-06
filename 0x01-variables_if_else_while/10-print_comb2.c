#include <stdio.h>

/**
 * main - This is a description of my main function
 *
 * Return: 0 for success
 */
int main(void)
{
	int num1;
	int num2;

	num2 = 0;

	for (num1 = 0; num2 == 9; num1++)
	{
		putchar(num1);
		putchar(num2);
		putchar(',');
		putchar(' ');
		num2++;
	}
return (0);
}
