#include "main.h"

/**
 * *string_toupper - convert lowercase letters of a string to uppercase
 * @s: the string to be converted
 * Return: void
 */
char *string_toupper(char *s)
{
	int i;
	int len = _strlen(s);

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
	}
	return (s);
}

#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: the string to be checked
 * Return: 0
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		++len;
		++s;
	}
	return (len);
}
