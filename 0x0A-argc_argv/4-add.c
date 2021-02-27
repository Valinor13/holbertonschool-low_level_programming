#include <stdio.h>
#include <stdlib.h>

/**
 * main - adding positive numbers
 * @argc: input count
 * @argv: input array of strings
 * Return: returns 0 for pass, 1 for failure
 */
int main(int argc, char *argv[])
{
	char *s;
	int i, j, x, zed;

	i = 1;
	x = 0;
	zed = 0;

	if (argc == 1)
	{
		puts("0");
		return (0);
	}

	while (i < argc)
	{
		s = argv[i];
		j = 0;

		while (s[j] != 00)
		{
			if (s[j] >= 48 && s[j] <= 57)
			{
				j++;
			}

			else
			{
				puts("Error");
				return (1);
			}
		}

		x = atoi(argv[i]);
		zed += x;
		i++;
	}

	printf("%d\n", zed);
	return (0);
}
