#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: always 0 success
 */
int main(void)
{
	int z;

	for (z = 0; z <= 100; z++)
	{
		if ((z % 3 == 0) && (z % 5 == 0))
			printf("FizzBuzz ");
		else if (z % 5 == 0)
			printf("Buzz ");
		else if (z % 3 == 0)
			printf("Fizz ");
		else
			printf("%d ", z);
	}
	printf("\n");
}
