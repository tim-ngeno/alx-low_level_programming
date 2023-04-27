#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list
 *
 * @h: pointer to node element
 *
 * Return: number of elements in the list
 */
size_t list_len(const list_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			h = h->next;
		n += 1;
	}

	return (n);
}
