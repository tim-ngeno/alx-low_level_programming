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
	int i, j, k, m, n;
	int count = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			count++;
		}
		count++;
	}

	s = malloc((count + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	k = 0;
	for (m = 0; m < ac; m++)
	{
		for (n = 0; av[m][n] != '\0'; n++)
		{
			s[k] = av[m][n];
			k++;
		}
		s[k] = '\n';
		k++;
	}

	s[k] = '\0';
	return (s);
}
