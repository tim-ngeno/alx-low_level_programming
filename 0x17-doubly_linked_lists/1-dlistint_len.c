#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked list
 *
 * @h: the head pointer
 *
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *s = h;
	size_t count = 0;

	while (s != NULL)
	{
		s = s->next;
		count += 1;
	}

	return (count);
}
