#include "main.h"

/**
 * print_sign - Print the sign of a number
 * @n: the number to be checked
 * Return: 0 if n is 0, 1 if n > 0, and -1 if n < 0
 */
int print_sign(int n)
{
	if (n == 0)
	{
		return (0);
		_putchar('0' + 0);
	}
	else if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	else
	{
		return (-1);
		_putchar('-');
	}
}
