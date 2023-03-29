#include "main.h"

/**
 * reverse_array - reverses the content of an array of digits
 * @a: the array of digits
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i;
	int last;

	last = n - 1;
	for (i  = 0; i < n / 2; i++)
	{
		int start, end;

		start = a[i];
		end = a[last];
		a[i] = end;
		a[last] = start;
		last--;
	}
}
