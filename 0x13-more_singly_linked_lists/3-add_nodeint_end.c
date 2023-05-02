#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a list
 *
 * @head: pointer to head pointer
 * @n: the input integer
 *
 * Return: pointer to the new node, Null otherwise
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *ptr;

	/* create new node */
	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	/* add data to new node */
	node->n = n;
	node->next = NULL;

	if (*head == NULL) /* if head is the only node */
	{
		*head = node; /* point to new node */
	}
	else
	{
		ptr = *head;
		while (ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		ptr->next = node;
	}

	return (*head);
}
