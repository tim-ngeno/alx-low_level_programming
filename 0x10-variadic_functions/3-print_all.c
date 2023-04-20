#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything
 *
 * @format: types of arguments passed to the function
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	int i;
	char *s, *separator = "";
	va_list params;

	va_start(params, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
			case 'c':
				printf("%s%c", separator, va_arg(params, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(params, int));
				break;
			case 'f':
				printf("%s%f", separator,
				       va_arg(params, double));
				break;
			case 's':
				s = va_arg(params, char *);
				if (!s)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				i++;
				continue;
			}
			separator = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(params);
}
