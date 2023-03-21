#include "main.h"

/**
 * _abs - Print the absolute value of a number
 * @c: the integer to be checked
 * Return: 0 success
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
