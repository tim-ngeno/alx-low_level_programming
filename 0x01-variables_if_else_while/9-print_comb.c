#include <stdio.h>

/**
 * main -Entry point
 *
 * Print all possible combination of single-digit numbers, separated by commas
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 0;

	for (n = 0; n < 10; n++)
	{
		putchar('0' + n);
		if (n < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
