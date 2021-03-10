#include "3-calc.h"

/**
 * get_op_func - selects the correct function for corresponding operator
 * @s: input operator string
 * Return: returns a function pointer to operator function
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (i < 6)
	{
		if (s[0] == ops[i].op[0])
			return (ops[i].f);

		i++;
	}

return (NULL);
}
