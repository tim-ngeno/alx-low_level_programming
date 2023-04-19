#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0(success)
 */
int main(int argc, char *argv[])
{
	int n1, n2;
	char *symbol;

	n1 = atoi(argv[1]);
	symbol = *argv[2];
	n2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (get_op_func(symbol) == NULL ||
	    symbol[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*symbol == '/' && n2 == 0) ||
	    (*symbol == '%' && n2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(symbol)(n1, n2));
	return (0);
}
