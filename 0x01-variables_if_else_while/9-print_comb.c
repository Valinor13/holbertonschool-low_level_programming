#include <stdio.h>

/**
 * main - This is a description of my main function
 *
 * Return: 0 for success
 */
int main(void)
{
	int num1;

	for (num1 = 48; num1 < 58; num1++)
	{
		putchar(num1);

		if (num1 < 57)
		{
			putchar(44);
			putchar(32);
		}
	}
putchar('\n');
return (0);
}
