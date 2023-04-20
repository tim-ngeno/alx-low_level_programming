#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by new line
 *
 * @separator: separates the strings
 * @n: number of strings to be printed
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int m;
	char *str;
	va_list s;

	va_start(s, n);

	for (m = 0; m < n; m++)
	{
		str = va_arg(s, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && m < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(s);
}
