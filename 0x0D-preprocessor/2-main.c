#include <stdio.h>
#define FILE __BASE_FILE__

/**
 * main - prints name of the file it was compiled from
 *
 * Return: always 0
 */
int main(void)
{
	printf("%s\n", FILE);
	return (0);
}
