#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiply two input numbers
 * @argc: arg count
 * @argv: array of strings
 * Return: returns 0 if success 1 if error
 */
int main(int argc, char *argv[])
{
	int x, y, z;

	if (argc != 3)
	{
		puts("Error");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = x * y;

	printf("%d\n", z);
	return (0);
}
