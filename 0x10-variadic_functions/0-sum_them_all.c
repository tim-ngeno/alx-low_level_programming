#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all -  returns the sum of all its parameters
 *
 * @n: the first parameter of the function
 *
 * Return: sum of parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	int sum = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(x, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(x, int);
	}

	va_end(x);
	return (sum);

}
