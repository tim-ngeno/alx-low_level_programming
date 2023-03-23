#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the diagonal is drawn
 * Return: void
 */
void print_diagonal(int n)
{
	int j;

	for (j = 1; j <= n; j++)
	{
		if (n <= 0)
			_putchar('\n');
		_putchar('\\');
	}
	_putchar('\n');
}
