#include "lists.h"

/**
 * print_listint_safe - prints a linked list listint_t
 *
 * @head: pointer to the head node
 *
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *p = head, *t;
	int count = 0;

	if (head == NULL)
		exit(98);

	while (p != NULL)
	{
		printf("[%p] %d\n", (void *)p, p->n);
		t = p->next;
		count += 1;
		if (t != NULL && t >= p)
		{
			printf("-> [%p] %d\n", (void *)t, t->n);
			exit(98);
		}

		p = t;
	}

	return (count);
}
