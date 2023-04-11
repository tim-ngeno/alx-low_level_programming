#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string and returns pointer
to its new location
* @str: the input string
* Return: pointer to the duplicate string
*/
char *_strdup(char *str)
{
	int i = 0;
	int count = 1;
	char *temp;

	if (str == NULL)
		return (NULL);

	while (str[count])
	{
		count++;
	}

	temp = malloc(sizeof(char) * (count + 1));

	if (temp == NULL)
	{
		return (NULL);
	}

	while (i < count)
	{
		temp[i] = str[i];
		i++;
	}

	temp[i] = '\0';
	return (temp);
}
