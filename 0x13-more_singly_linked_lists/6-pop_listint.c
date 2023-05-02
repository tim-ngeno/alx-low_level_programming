#include "lists.h"

/**
 * pop_listint - deletes the head node of a list
 *
 * @head: pointer to pointer of the head node
 *
 * Return: head node's data value
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *p;

	if (*head == NULL)
	{
		return (0);
	}

	else
	{
		n = (*head)->n;
		p = *head;
		*head = (*head)->next;
		free(p);
		p = NULL;
	}

	return (n);
}
