#include "main.h"

/**
 * my_prime - check for prime number
 *
 * @a: the input integer
 * @b: recursive integer, from 1 to n
 *
 * Return: 1 if success
 */
int my_prime(int a, int b)
{
	if (a <= 1)
		return (0);
	if (a % b == 0 && b > 1)
		return (0);
	if ((a / b) < b)
		return (1);
	return (my_prime(a, b + 1));
}


/**
 * is_prime_number - checks if the input integer is prime
 *
 * @n: the input integer
 *
 * Return: 1 if n is prime, otherwise 0
 *
 */
int is_prime_number(int n)
{
	return (my_prime(n, 1));
}
