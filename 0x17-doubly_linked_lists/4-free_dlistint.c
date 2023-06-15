#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: pointer to the head node
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head, *p = NULL;

	while (temp != NULL)
	{
		p = temp->next;
		free(temp);
		temp = p;
	}
}
