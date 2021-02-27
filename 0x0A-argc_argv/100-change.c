#include <stdio.h>
#include <stdlib.h>

/**
 * main - making change out of whole ints
 * @argc: input count
 * @argv: input array of strings
 * Return: returns 1 if failure and 0 if success
 */
int main(int argc, char *argv[])
{
	int x, qtr, dime, nik, tobit, peni, change;
	char *s;

	if (argc != 2)
	{
		puts("Error");
		return (1);
	}
 
	s = argv[1];

	while (*s != 00)
	{
		if (*s >= 48 && *s <= 57)
		{
			s++;
		}

		else
		{
			puts("Error");
			return (1);
		}
	}

	x = atoi(argv[1]);

	if (x < 0)
	{
		puts("0");
		return (0);
	}

	while (x != 0)
	{
		for (qtr = 0; x - 25 >= 0; qtr++)
		{
			x -= 25;
		}

		for (dime = 0; x - 10 >= 0; dime++)
		{
			x -= 10;
		}

		for (nik = 0; x - 5 >= 0; nik++)
		{
			x -= 5;
		}

		for (tobit = 0; x - 2 >= 0; tobit++)
		{
			x -= 2;
		}

		for (peni = 0; x - 1 >= 0; peni++)
		{
			x -= 1;
		}
	}

	change = qtr + dime + nik + tobit + peni;
	printf("%d\n", change);
	return (0);
}
