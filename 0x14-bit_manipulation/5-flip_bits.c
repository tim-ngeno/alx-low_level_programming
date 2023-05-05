#include "main.h"

/**
 * flip_bits - gets num of bits needed to get from one bit to another
 *
 * @n: first input integer
 * @m: second input integer
 *
 * Return: number of bits to be flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int t = 0;

	while (n || m)
	{
		if ((n & 1) != (m & 1))
			t += 1;
		n >>= 1;
		m >>= 1;
	}

	return (t);
}
