#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: input unsigned long integer
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	int bit;
	unsigned int first = 1;

	for (bit = 31; bit >= 0; bit--)
	{
		if ((n >> bit) & 1)
		{
			_putchar('1');
			first = 0;
		}
		else if (!first)
		{
			_putchar('0');
		}
	}

	if (first)
		_putchar('0');

}
