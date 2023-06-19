#include "main.h"

/**
 * _puts - print a string followed by a newline to stdout
 * @str: the string to be printed
 * Return: void
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
