#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perform the request
 * @s: operator passed by the argument
 * Return: 0
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

	while (i <= 5)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			i++;
			break;
		}
		i++;
	}
	return (ops[i - 1].f);
}
