#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to previous memory
 * @old_size: size of ptr in bytes
 * @new_size:size of the new memory block
 *
 * Return: pointer to new memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *new_p, *s;

	s = ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{	new_p = malloc(new_size);
		if (new_p == NULL)
			return (NULL);
		free(ptr);
		return (new_p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_p = malloc(new_size);
	if (new_p == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		new_p[i] = s[i];

	free(ptr);
	return (new_p);
}
