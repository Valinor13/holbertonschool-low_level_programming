#include <stdio.h>

/**
 * main - print argc
 * @argc: number of arguments
 * @argv: array of strings
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	if (argv[0] != 00)
	{
		printf("%d\n", argc);
	}

	return (0);
}
