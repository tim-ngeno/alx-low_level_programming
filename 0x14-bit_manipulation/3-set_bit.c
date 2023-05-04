#include "main.h"

/**
 * set_bit - sets value of a bit to 1 at certain index
 *
 * @n: pointer to the input integer
 * @index: position of bit to be set to 1
 *
 * Return: On success 1, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int t;

	if (n == NULL || (index >= (sizeof(unsigned long int) * 8)))
		return (-1);

	t = 1 << index;
	*n = (*n | t);

	return (1);
}
