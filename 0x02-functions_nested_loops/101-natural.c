#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: result of adding multiples of 3 and 5 below 1024
 *
 */
int main(void)
{
	int x;
	int result;

	if ((x % 3 == 0) || (x % 5 == 0) && (x < 1024))
		result = result + x;
	printf("%d", result);
	return (0);
}
