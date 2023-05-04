#include "lists.h"

/**
 * insert_nodeint_at_index - inserts node at given index
 *
 * @head: pointer to pointer of head node
 * @idx: index to add new node
 * @n: data to be added at target position
 *
 * Return: address of new node, NULL otherwise
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *ptr = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (ptr == NULL && idx == 0)
	{
		new->next = *head;
		*head = new;
	}

	for (count = 0; ptr != NULL && count <= idx - 1; count++)
	{
		if (count == idx - 1)
		{
			new->next = ptr->next;
			ptr->next = new;
		}
		else
		{
			ptr = ptr->next;
		}
	}

	return (new);
}
