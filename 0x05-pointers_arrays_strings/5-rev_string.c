#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int index;
	int len = _strlen(s);

	for (index = len; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}

/**
 * _strlen - print the length of a string
 * @s: the string
 * Return: void
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
