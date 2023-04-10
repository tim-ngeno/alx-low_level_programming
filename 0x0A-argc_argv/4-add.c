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
		if (!(*argv[i] >= 49 && *argv[i] <= 57)
		    || *argv[i] < 0)

		{
			printf("Error\n");
			return (1);
		}

		else

		{
			total += atoi(argv[i]);
		}

	}
	printf("%d\n", total);
	return (0);
}
