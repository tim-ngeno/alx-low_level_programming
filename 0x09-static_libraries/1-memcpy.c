#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 *
 * @dest: the destination string
 *
 * @src: the source string
 *
 * @n: bytes to be copied
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *temp = dest;

	for (i = 0; i < n; i++)
	{
		temp[i] = src[i];
	}
	return (dest);
}
