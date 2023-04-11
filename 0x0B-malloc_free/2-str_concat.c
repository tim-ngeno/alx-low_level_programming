#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: string input 1
 * @s2: string input 2
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int count;
	int i = 0;
	int j = 0;
	int m = 0;
	int n = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	count = i + j;

	s = malloc((count + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	while (m < count)
	{
		if (m <= i)
		{
			s[m] = s1[m];
		}
		if (m >= i)
		{
			s[m] = s2[n];
			n++;
		}
		m++;
	}
	s[m] = '\0';
	return (s);
}
