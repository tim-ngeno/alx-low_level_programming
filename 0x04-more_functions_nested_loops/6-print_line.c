#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: the number of times the _ is printed
 * Return: void
 */
void print_line(int n)
{
	int x;

	for (x = 0; x <= n; x++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('_');
	}
	_putchar('\n');
}
