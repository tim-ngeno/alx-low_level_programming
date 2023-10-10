#include "search_algos.h"


/**
 * print_array - prints the elements of an array
 * @array: the input array
 * @left: the left boundary of the array
 * @right: the right boundary of the array
 *
 * Return: void
 */
void print_array(int *array, unsigned int left, unsigned int right)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}


/**
 * binary_search - searches for a value in sorted array of integers
 * @array: the input array
 * @size: number of elements in the array
 * @value: the target value to search for
 *
 * Return: index of value on success, -1 otherwise
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int left, right, mid;

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		print_array(array, left, right);

		mid = (left + right) / 2;

		if (array[mid] < value)
		{
			left = mid + 1;
		}
		else if (array[mid] > value)
		{
			if (mid == 0)
				break;
			right = mid - 1;
		}
		else
		{
			return (mid);
		}
	}
	return (-1);
}
