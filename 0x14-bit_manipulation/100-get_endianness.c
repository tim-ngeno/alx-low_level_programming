#include "main.h"

/**
 * get_endianness - checks how multibyte data is stored
 *
 * Return: nothing
 */
int get_endianness(void)
{
	unsigned int t = 1;
	char *s = (char *)&t;

	return ((int) *s);
}
