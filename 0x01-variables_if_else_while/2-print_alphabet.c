#include <stdio.h>

/**
 * main -Entry point
 *
 * return always 0 (success)
 */
int main(void)
{
	char c = 'a';

	/* loop through the alphabet */
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}
