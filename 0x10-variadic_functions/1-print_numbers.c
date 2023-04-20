#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers passed as parameters
 *
 * @separator: the string separating the numbers
 * @n: the number of integers passed to the function
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list j;

	va_start(j, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(j, int));

		if (separator != NULL && (i < n - 1))
			printf("%s", separator);
	}

	printf("\n");
	va_end(j);
}
