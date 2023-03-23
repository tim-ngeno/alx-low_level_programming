#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the number of times the diagonal is drawn
 * Return: void
 */
void print_diagonal(int n)
{
	int j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < n; k++)
			{
				if (k == j)
					_putchar('\\');
				else if (k < j)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
