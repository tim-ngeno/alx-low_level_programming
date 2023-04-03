#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 *
 * @s: the string to be checked
 *
 * @c: the character to be located
 *
 * Return: void
 */
char *_strchr(char *s, char c)
{
	int i;

	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);

}
