#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to a string of 0s and 1s
 *
 * Return: uint converted or 0 otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int t = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '0' || b[i] == '1')
		{
			t <<= 1;
			t += b[i] - '0';
		}
		else
		{
			return (0);
		}
	}

	return (t);
}
