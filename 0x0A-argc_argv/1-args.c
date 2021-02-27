#include <stdio.h>

/**
 * main - print argc
 * @argc: number of arguments
 * @argv: array of strings
 * Return: returns 0
 */
int main(int argc, char *argv[])
{
	(void)*argv;

	printf("%d\n", argc - 1);

return (0);
}
