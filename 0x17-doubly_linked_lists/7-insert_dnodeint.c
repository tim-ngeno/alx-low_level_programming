#include "lists.h"

/**
 * insert_dnodeint_at_index - insert a node at given pos
 * @h: pointer to pointer of head node
 * @idx: index of new node
 * @n: input value of new node
 * Return: address of new node, otherwise NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new = NULL;
	unsigned int count, nodes;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (h == NULL)
		return (NULL);
	nodes = count_nodes(*h);
	if ((*h == NULL && idx == 0) || idx == 0)
		return (add_dnodeint(h, n));
	else if (nodes == idx)
		return (add_dnodeint_end(h, n));

	for (count = 0; temp != NULL && count <= idx - 1; count++)
	{
		if (count == idx - 1)
		{
			new->next = temp->next;
			new->prev = temp;
			temp->next = new;
			new->next->prev = new;
			return (new);
		}
		temp = temp->next;
	}
	return (temp);
}

/**
 * count_nodes - count the nodes in a linked list
 * @h: pointer to the head node
 * Return: number of nodes
 */
size_t count_nodes(dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
