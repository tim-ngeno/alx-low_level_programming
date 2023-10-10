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
	unsigned int i, start;

	if (array == NULL || size == 0)
		return (-1);

	printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	while (prev < size && array[prev] < value)
	{
		prev += jump;
		if (prev < size)
			printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
	}

	start = prev - jump;
	printf("Value found between indexex [%d] and [%d]\n", start, prev);

	for (i = start; i < size && i <= prev; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
