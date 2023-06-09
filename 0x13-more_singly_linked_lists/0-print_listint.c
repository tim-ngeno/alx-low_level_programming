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
	const listint_t *p = h;
	int count = 0;


	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		count += 1;
	}

	return (count);
}
