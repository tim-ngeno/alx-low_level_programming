#include "main.h"

/**
 * *leet - encode a string into 1337
 *
 * @s: the input string
 *
 * Return: the encoded string
 */
char *leet(char *s)
{
	int i;
	int index;
	char upper[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char lower[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char digit[] = {'4', '3', '0', '7', '1', '\0'};

	for (index = 0; s[index] != '\0'; ++index)
	{
		for (i = 0; i < 5; i++)
		{
			if ((s[index] == upper[i]) || (s[index] == lower[i]))
				s[index] = digit[i];
		}
	}
	return (s);
}
