#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: the number pssed to the function
 * return: void
 *
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i < 98; i++)
		{
			printf("%d", i);
			printf(",");
			printf(" ");
		}
	}
	else
	{
		for (i = n; i > 98; i--)
		{
			printf("%d", i);
			printf(", ");
		}
	}
	printf("98\n");
}
