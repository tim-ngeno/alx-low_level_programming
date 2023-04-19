#include "3-calc.h"
#include <stddef.h>

/**
 * get_op_func - selects correct function to perform operation
 *
 * @s: operator passed as argument
 *
 * Return: pointer to function corresponding with operator s
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
	unsigned long int i;

	while (ops[i].op != NULL && *(ops[i].op) != *s)
	{
		i++;
	}
	return (ops[i].f);
}
