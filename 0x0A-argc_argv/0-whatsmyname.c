#include <stdio.h>

/**
 * main - entry Point
 *
 * @argc: the argument count
 * @argv:  the argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i == 0)
			printf("%s\n", argv[i]);
	}
	return (0);
}
