#include "main.h"

/**
 * char *_strncat - concatenates two strings with at most n bytes from source
 * @dest: the destination string to be returned
 * @src: the source string
 * @n: the number of bytes to be used
 * Return: dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*temp++ = src[i];
	}
	*temp = '\0';
	return (dest);
}
