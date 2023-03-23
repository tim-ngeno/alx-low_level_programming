#include "main.h"

/**
 * print_triangle - draws a triangle on the terminal
 * @size: the size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int j, k, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (k = size - j; k > 1; k--)
			{
				_putchar(' ');
			}
			for (z = 0; z <= j; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
