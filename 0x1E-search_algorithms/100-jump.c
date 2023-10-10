#include "search_algos.h"
#include <math.h>

/**
 * jump_search - use jump search algorithm to find a value in a
 * sorted array of integers
 * @array: pointer to the first element of the target array
 * @size: number of elements in the array
 * @value: the target value to search for in the array
 *
 * Return: the first index where value is located, otherwise -1
 */
int jump_search(int *array, size_t size, int value)
{
	unsigned int jump = sqrt(size);
	unsigned int prev = 0;
	unsigned int i;

	if (array == NULL)
		return (-1);

	while (array[(jump < size ? jump : size) - 1] < value)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		prev = jump;
		jump += sqrt(size);
		if (prev >= size)
			return (-1);
	}

	printf("Value found between indexes [%d] and [%d]\n", prev, jump);

	for (i = prev; i < (jump < size ? jump : size); i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
