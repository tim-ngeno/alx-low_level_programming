#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
	char c = 'a';
	char C = 'A';

	/* loop through the alphabet */
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);
	putchar('\n');
	return (0);
}
