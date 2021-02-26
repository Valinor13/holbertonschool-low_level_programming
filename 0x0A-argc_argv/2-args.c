#include <stdio.h>

/**
 * main - prints all arguments passed from the CL
 * @argc: arg count
 * @argv: array of strings
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
