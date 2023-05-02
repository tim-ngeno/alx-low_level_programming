#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at particular index
 *
 * @head: pointer to pointer of head node
 * @index: position of node to delete
 *
 * Return: On success 1, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	else if (index == 0)
	{
		*head = (*head)->next;
		free(current);
		current = NULL;
	}

	else
	{
		while (i != index)
		{
			i++;
			previous = current;
			current = current->next;
		}
		previous->next = current->next;
		free(current);
		current = NULL;
	}
	return (1);
}
