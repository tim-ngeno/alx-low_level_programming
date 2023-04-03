#include "main.h"

/**
 * _strstr - finds first match of the substring needle in the string haystack
 *
 * @haystack: the string to be scanned
 *
 * @needle: the string to be located
 *
 * Return: the matched string or NULL otherwise
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *p;

		p = haystack;
		while (*needle == *haystack)
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
			return (p);
		haystack++;
	}
	return (0);
}
