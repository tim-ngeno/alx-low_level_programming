#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any set of bytes
 *
 * @s: the input string
 *
 * @accept: the string whose bytes are checked
 *
 * Return: a pointer to the byte in s that matches, or NULL otherwise
 *
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
