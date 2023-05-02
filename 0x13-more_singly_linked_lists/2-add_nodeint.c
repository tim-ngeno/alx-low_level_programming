#include "lists.h"

/**
 * add_nodeint - adds a node at the beginning of list
 *
 * @head: pointer to pointer of head node
 * @n: input integer to data of node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* add data to new node */
	new_node->next = *head; /* link it to list */
	*head = new_node; /* make new_node the new head */

	return (*head);
}
