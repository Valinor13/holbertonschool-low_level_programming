#include "3-calc.h"

/**
 * main - performs simple math
 * @argc: argument count
 * @argv: argument array
 * Return: returns integer or error
 */
int main(int argc, char *argv[])
{
	int x, y, pmath;

	if (argc != 4)
	{
		puts("Error");
		exit(98);
	}

	if ((argv[2][0] != '+' || argv[2][0] != '-' || argv[2][0] != '*' ||
	argv[2][0] != '/' || argv[2][0] != '%') && argv[2][1] != 00)
	{
		puts("Error");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	pmath = (get_op_func(argv[2])(x, y));
	printf("%d\n", pmath);

return (0);
}
