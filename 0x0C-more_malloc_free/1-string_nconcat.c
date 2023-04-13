#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: string input 1
 * @s2: string input 2
 * @n: number of bytes of string 2
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0;
	unsigned int l1 = 0, l2 = 0;
	unsigned int x, y = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
	{
		l1++;
		i++;
	}

	while (s2[j])
	{
		j++;
		l2++;
	}

	if (n >= l2)
		n = l2;
	s = malloc(sizeof(char) * (l1 + n + 1));
	if (s == NULL)
		return (NULL);

	for (x = 0, y = 0; x < (l1 + n); x++)
	{
		if (x < i)
			s[x] = s1[x];
		else
			s[x] = s2[y++];
	}

	s[x] = '\0';
	return (s);
}
