#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - Selects the right func to perform the
 * operation requested by the user
 * @s: The operator passed to argument
 *
 * Return: A pointer to the func based on the
 * operation given by the user
 */


int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	i = 0;
	while (ops[i].op != NULL && *(ops[i].op) != *s)
		i++;

	return (ops[i].f);
}
