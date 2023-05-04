#include "main.h"

/**
 * clear_bit - sets value of a bit to 0
 *
 * @n: pointer to input value
 * @index: position of input value to be set to 0
 *
 * Return: On success 1, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int t;

	if (n == NULL)
		return (-1);

	t = 1 << index;
	if (*n & t)
		*n ^= t;

	return (1);
}
