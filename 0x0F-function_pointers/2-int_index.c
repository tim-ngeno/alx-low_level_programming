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

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]) != 0)
			return (n);
		if (cmp(array[size - 1] == 0))
			return (-1);
	}
	return (-1);
}
