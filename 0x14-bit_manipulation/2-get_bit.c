#include "main.h"

/**
 * get_bit - gets value of bit at particular index
 *
 * @n: value of input integer
 * @index: position of n to retrieve bit
 *
 * Return: value of bit, otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	else
	{
		return ((n >> index) & 1);
	}
}
