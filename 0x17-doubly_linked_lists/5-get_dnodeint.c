#include "lists.h"

/**
 * get_dnodeint_at_index - get nth node of a dlist
 *
 * @head: pointer to the head node
 * @index: index at which to retrieve node
 *
 * Return: nth node, NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int count = 0;

	if (head)
	{
		while (temp != NULL)
		{
			if (count == index)
				return (temp);
			count++;
			temp = temp->next;
		}
	}
	return (NULL);
}
