#include "function_pointers.h"

/**
 * int_index - searches for an integer in array
 *
 * @array: the input array
 * @size: size of the array(number of elements)
 * @cmp: pointer to function returning int
 *
 * Return: index of first element matching the search
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int n;
	int index;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return;

	for (n = 0; n < size; n++)
	{
		index = cmp(array[n]);
		if (index != 0)
			return (n);
		if (cmp(array[size - 1] == 0))
			return (-1);
	}
	return (0);
}
