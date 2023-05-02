#include "lists.h"

/**
 * listint_len - print the number of elements in a list
 *
 * @h: the node head
 *
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	if (h == NULL)
		return (-1);

	while (h != NULL)
	{
		len += 1;
		h = h->next;
	}

	return (len);
}
