#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end of the list
 *
 * @head: pointer to pointer of head node
 * @n: input integer to be added to the node
 *
 * Return: on success, address of new node, otherwise NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *temp = *head;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (*head)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new_node;
		new_node->prev = temp;
		new_node->next = NULL;
		return (new_node);
	}
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (*head);
}
