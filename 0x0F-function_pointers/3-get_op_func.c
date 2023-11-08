#include "3-calc.h"

/**
* get_op_func - is a function to add two integers
*
* @s: check the operator
*
* Return: the result of addition
*
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
	int i = 0;

	while (i < 5)
	{
		if (*(ops[i].operator) == *s)
		{
			return (ops[i].func);
		}
		i++;
	}
	return (0);
}
