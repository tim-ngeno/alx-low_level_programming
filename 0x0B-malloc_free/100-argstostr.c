#include "main.h"
#include <stdlib.h>

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
	int i, m, n, j;
	int count = 1;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
	}

	s = malloc((count + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	m = 0;
	for (n = 0; n < ac; n++)
	{
		for (j = 0; av[n][j] != '\0'; j++)
		{
			s[m] = av[n][j];
			m++;
		}
		s[m] = '\n';
		m++;
	}

	s[m] = '\0';
	return (s);
}
