#include "main.h"

/**
 * rot13 - encodes a string using rot13
 *
 * @s: the input string
 *
 * Return: the encoded string
 */
char *rot13(char *s)
{
	int index;
	int i;

	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; s[index] != '\0'; index++)
	{
		for (i = 0; alphabet[i] != '\0'; i++)
		{
			if (s[index] == alphabet[i])
			{
				s[index] = rot[i];
				break;
			}
		}
	}
	s[index] = '\0';
	return (s);
}
