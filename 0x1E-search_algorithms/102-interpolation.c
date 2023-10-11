#include "search_algos.h"

/**
 * interpolation_search - uses interpolation search algorithm to
 * find a value in a sorted array of integers
 * @array: pointer to the first element of the target array
 * @size: number of elements in the array
 * @value: the target value to search for
 *
 * Return: first index of value, otherwise -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	unsigned int low;
	unsigned int high;
	unsigned int pos;

	if (!array)
		return (-1);

	low = 0;
	high = size - 1;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == value)
			{
				printf("Value checked array[%d] = [%d]\n", low, array[low]);
				return (low);
			}
			return (-1);
		}

		pos = low + (((double)(high - low) /
					  (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	if (value > array[high])
	{
		pos = low + (((double)(high - low) /
					  (array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%d] is out of range\n", pos);
	}

	return (-1);
}
