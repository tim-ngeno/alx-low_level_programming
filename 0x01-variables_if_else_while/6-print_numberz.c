#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a = 0;

	for (a = 0; a < 10; a++)
		putchar(48 + a);
	putchar('\n');
	return (0);
}
