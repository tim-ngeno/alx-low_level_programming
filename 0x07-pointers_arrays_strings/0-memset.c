#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: the memory area
 *
 * @b: the constant byte
 *
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *temp = s;

	i = 0;

	for (i = 0; i < n; i++)
	{
		temp[i] = b;
	}
	return (s);
}
