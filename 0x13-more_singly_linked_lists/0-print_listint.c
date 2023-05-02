#include "lists.h"

/**
 * print_listint - prints all elements of a list
 *
 * @h: the head node
 *
 * Return: number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (-1);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}

	return (count);
}
