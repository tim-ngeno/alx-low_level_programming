#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 *
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: 0 on succes, 1 on error
 */
int main(int argc, char *argv[])
{
	int n;
	int index;
	int count = 0;
	int coins[] = {25, 10, 5, 2, 1};


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("0\n");
	}

	for (index = 0; index < 5; index++)
	{
		while (n >= coins[index])
		{
			n -= coins[index];
			count++;
		}
	}

	printf("%d\n", count);

	return (0);
}
