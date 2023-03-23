#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0-14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i, j;

	i = 0;
	for (i = 0; i < 10; i++)
	{
		j = 0;
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
				_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
		}
		_putchar('\n');
	}
}
