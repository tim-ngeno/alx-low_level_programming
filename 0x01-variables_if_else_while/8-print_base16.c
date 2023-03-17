#include <stdio.h>

/**
 * main -Entry point
 *
 * Print all base16 numbers in lowecase
 *
 * Return: always 0 (success)
 */
int main(void)
{
	int n;
	char c;

	for (n = 0; n < 10; n++)
		putchar(48 + n); /* 48 makes the glyphs show as digits*/

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
