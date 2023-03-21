#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @n: the number to be passed
 * Return: 0(Success)
 *
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;
	if (last < 0)
	{
		last *= -1;
		return (last_digit);
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
