#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to power of y
 *
 * @x: the base integer
 *
 * @y: the power integer
 *
 * Return: -1 if y is lower than 0, 0 otherwise
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

	return (0);
}
