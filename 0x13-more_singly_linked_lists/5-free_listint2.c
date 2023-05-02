#include "lists.h"

/**
 * free_listint2 - frees a listint list
 *
 * @head: head node pointer
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	while (*head != NULL)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
}
