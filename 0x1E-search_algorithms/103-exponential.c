#include "search_algos.h"

/**
 * exponential_helper - helper function for exponential search
 * @array: the target array to search
 * @start: starting index of the subarray
 * @end: the last index of the subarray
 * @value: the value to search for
 *
 * Return: first index of the value, otherwise -1
 */
int exponential_helper(int *array, unsigned int start,
						 unsigned int end, int value)
{
	size_t mid, i;

	if (!array)
		return (-1);

	while (start <= end)
	{
		mid = start + (end - start) / 2;
		printf("Searching in array: ");
		for (i = start; i <= end; i++)
			printf(i < end ? "%d, " : "%d\n", array[i]);

		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);
}


/**
 * exponential_search - use exponential search algorithm to find a
 * value in a sorted array of integers
 * @array: pointer to the first element of target array
 * @size: number of elements in the array
 * @value: target value to search for
 *
 * Return: first index where value is located, -1 otherwise
 */
int exponential_search(int *array, size_t size, int value)
{
	unsigned int i = 1;

	if (!array || size == 0)
	{
		return (-1);
	}

	while (i < size && array[i] < value)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		i *= 2;
	}
	printf("Value found between indexes [%d]  and [%ld]\n",
		   i / 2, i < size ? i : size - 1);
	return (exponential_helper(array, i / 2,
							   i < size ? i : size - 1, value));
}
