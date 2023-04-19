#ifndef CALC_H
#define CALC_H

#include <stdlib.h>

/**
 * struct op - operations structure
 *
 * @op: the operator symbol
 * @f: the function to perform the operation
 *
 */
struct op
{
	char *op;
	int (*f)(int a, int b);
};

typedef struct op op_t;

int op_add(int a, int b);

int op_sub(int a, int b);

int op_mul(int a, int b);

int op_div(int a, int b);

int op_mod(int a, int b);

int (*get_op_func(char *s))(int, int);

#endif /* ifndef CALC_H */
