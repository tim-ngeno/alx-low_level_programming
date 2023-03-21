#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: the number to be passed
 * Return: Value of the last digit
 *
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
	{
		x = x * -1;
		_putchar(x + '0');
		return (x);
	}
	_putchar(x + '0');
	return (x);
}
