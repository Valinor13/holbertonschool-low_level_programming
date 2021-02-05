#include <stdio.h>
/**
 * main - Random int designation
 *
 * Return: Value of None
 */
int  main(void)
{
	char abc;

	for (abc = 0; abc < 10; abc++)
	{
		putchar(abc + '0');
	}
	for (abc = 'a'; abc < 'g'; abc++)
	{
		putchar(abc);
	}
	putchar('\n');
return (0);
}
