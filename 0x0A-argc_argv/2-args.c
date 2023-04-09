#include <stdio.h>

/**
 * main - prints all arguments it receives
 *
 * @argc: the argument count
 * @argv: the argument vector
 *
 * Return: Always 0 (Success)
 *
 */
int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	{
		printf("%s\n", argv[index]);
	}

	return (0);
}
