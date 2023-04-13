
#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: the lowest integer value
 * @max: the highest integer value
 *
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *numbers;

	if (min > max)
		return (NULL);

	numbers = malloc((max - min + 1) * sizeof(int));

	if (numbers == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		numbers[i] = min++;

	return (numbers);
}
