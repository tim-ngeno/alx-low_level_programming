#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: pointer to pointer of the head node
 *
 * Return: pointer to head of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *nxt = NULL;

	if (*head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		nxt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nxt;
	}
	*head = prev;

	return (*head);
}
