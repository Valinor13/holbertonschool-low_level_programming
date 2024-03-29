#include "3-calc.h"

/**
 * main - performs simple math
 * @argc: argument count
 * @argv: argument array
 * Return: returns integer or error
 */
int main(int argc, char *argv[])
{
	int (*pmath)(int x, int y), x, y;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	pmath = get_op_func(argv[2]);

	if (pmath == NULL)
	{
		puts("Error");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	printf("%d\n", pmath(x, y));

return (0);
}
