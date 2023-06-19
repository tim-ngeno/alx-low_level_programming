#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: input string
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int k = 0;
	char *temp = s;

	while (*temp != '\0' && (*temp < '0' || *temp > '9'))
	{
		if (*temp == '-')
			sign *= -1;
		temp++;
	}
	if (*temp != '\0')
	{
		do {
			k = k * 10 + (*temp - '0');
			temp++;
		} while (*temp >= '0' && *temp <= '9');
	}
	return (k * sign);
}
