#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a matrix
 *
 * @a: the array
 *
 * @size: the size of the array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, b, c, d, e;

	d = e = 0;
	x = 0;
	b = size - 1;
	for (c = 0; c < size; c++)
	{
		d += *(a + c * size + x);
		e += *(a + c * size + b);
		x += 1;
		b -= 1;
	}
	printf("%d, %d\n", d, e);
}
