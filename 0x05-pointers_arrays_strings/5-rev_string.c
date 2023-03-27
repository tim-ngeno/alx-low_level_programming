#include "main.h"

/**
 * rev_string - reverses a string
 * @s: the string
 * Return: void
 */
void rev_string(char *s)
{
	int index;
	int len;

	char *begin, *end = s;

	for (index = 0; s[index] != '\0' && s[index + 1] != '\0'; index++)
	{
		end++;
	}
	len = index +1;
	begin = s;

	for (index = 0; index < len / 2; index++)
	{
		char temp;
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
	end[len + 1] = '\0';
}
