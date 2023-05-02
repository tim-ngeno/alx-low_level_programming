#include "lists.h"

/**
 * get_nodeint_at_index - get particular node from list
 *
 * @head: pointer to the head node
 * @index: position of target node
 *
 * Return: target node of list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (p != NULL && count < index)
	{
		count += 1;
		p = p->next;

	}

	return (p);

}
