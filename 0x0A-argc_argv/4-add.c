#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/**
 * main - Adds positive numbers
 *
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 if success, 1 on error
 *
 */
int main(int argc, char *argv[])
{
	int i;
	int total = 0;

	for (i = 1; i < argc; i++)
	{
		if (!(isdigit(*argv[i])))
		{
			printf("Error\n");
			return (1);
		}

		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
