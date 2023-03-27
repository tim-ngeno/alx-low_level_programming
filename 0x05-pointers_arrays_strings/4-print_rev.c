#include "main.h"

/**
 * print_rev - print a string in reverse order
 * @s: string
 * Return: void
 */
void print_rev(char *s)
{
	int index;
	int len;

	len = _strlen(s);
	for (index = len - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}

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
