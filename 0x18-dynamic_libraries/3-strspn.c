#include "main.h"
#include <string.h>

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: the initial string
 *
 * @accept: the second string
 *
 * Return: number of bytes in s which consist of bytes from accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
