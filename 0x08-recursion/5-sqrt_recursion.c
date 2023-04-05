#include "main.h"

/**
 * my_sqrt - finds recursive square root
 * @n: equal to the input integer
 * @i: iterative number
 * Return: the root, on success, -1 otherwise
 */
int my_sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (my_sqrt(n, i + 1));
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: the integer input
 *
 * Return: -1 if n doesn't have a square root, 0 otherwise
 *
 */
int _sqrt_recursion(int n)
{
	return (my_sqrt(n, 1));
}
