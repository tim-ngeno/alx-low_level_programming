#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - concatenates all arguments of the program
 *
 * @ac: the argument count
 * @av: the argument vector
 *
 * Return: concatenated arguments
 */
char *argstostr(int ac, char **av)
{
	int n;
	int m = 0;
	int i = 0;
	int count = 1;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 1; i < ac; i++)
	{
		while (*av[i] != '\0')
		{
			av[i]++;
			count++;
		}
	}

	s = malloc((count + 1) * sizeof(char));
	if (s == NULL)
		return (NULL);

	for (n = 0; n < ac; n++)
	{
		while (*av[n] != '\0')
		{
			s[m] = *av[n];
			m++;
			av[n]++;
		}
		s[m] = '\n';
		m++;
	}
	s[m] = '\0';
	return (s);
}
