#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 *
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc == 1 || argc == 2 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}


	if (argc > 1 && argc <= 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}

	return (0);
}
