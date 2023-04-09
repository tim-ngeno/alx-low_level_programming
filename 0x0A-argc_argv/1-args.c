#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		atoi(argv[i]);
	}
	printf("%d\n", argc - 1);
	return (0);
}
