#include "search_algos.h"

/**
 * print_array - prints the elements of an array
 * @array: the array to print
 * @left: first index in the array
 * @right: last index in the array
 *
 * Return: void
 */
void print_array(int *array, unsigned int left, unsigned int right)
{
	unsigned int i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}


/**
 * binary_recursive - performs a binary search recursively
 * @array: target array to search in
 * @left: first index in the array
 * @right: last index in the array
 * @value: target value to search for
 *
 * Return: first index of value, -1 otherwise
 */
int binary_recursive(int *array, unsigned int left,
					 unsigned int right, int value)
{
	unsigned int mid;

	if (array == NULL)
		return (-1);

	if (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value &&
			(mid == left || array[mid - 1] != value))
			return (mid);

		if (array[mid] < value)
			return (binary_recursive(array, mid + 1, right, value));

		else
			return (binary_recursive(array, left, mid, value));
	}

	return (-1);
}


/**
 * advanced_binary - searches for a value using binary search
 * @array: the target array to search in
 * @size: number of elements in the array
 * @value: value to search for in the array
 *
 * Return: first index where value is, -1 otherwise
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);

	return (binary_recursive(array, 0, size - 1, value));
}
