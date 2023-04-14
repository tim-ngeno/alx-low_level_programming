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
	int i, j;
	int total = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; *argv[j] != '\0'; j++)
		{
			if (!(isdigit(*argv[j])))
			{
				printf("Error\n");
				return (1);
			}
		}

		total += atoi(argv[i]);
	}
	printf("%d\n", total);
	return (0);
}
