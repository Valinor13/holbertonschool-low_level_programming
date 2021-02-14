#include <stdio.h>

/**
 * main - This is a description of my main function
 *
 * Return: 0 for success
 */
int main(void)
{
	int num1;

	for (num1 = 0; num1 <= 99; num1++)
	{
		putchar(num1 / 10 + '0');
		putchar(num1 % 10 + '0');

		if (num1 != 99)
		{
			putchar(44);
			putchar(32);
		}
	}
putchar('\n');
return (0);
}
