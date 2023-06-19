#include "main.h"

/**
 * *_strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*start != '\0')
	{
		start++;
	}
	while (*src != '\0')
	{
		*start++ = *src++;
	}
	*start = '\0';
	return (dest);
}
