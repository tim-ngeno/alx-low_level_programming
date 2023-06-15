#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list
 *
 * @head: pointer to pointer of the head node
 * @n: input integer to be added to the node
 *
 * Return: address of new node on success, NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (*head)
	{
		new->prev = (*head)->prev;
		new->next = *head;
		(*head)->prev = new;
		*head = new;
		return (*head);
	}

	new->next = *head;
	new->prev = NULL;
	(*head) = new;

	return (*head);
}
