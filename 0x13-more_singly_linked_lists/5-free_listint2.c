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
	listint_t *p, *t;

	if (*head != NULL)
	{
		p = *head;

		while ((t = p) != NULL)
		{
			p = p->next;
			free(t);
		}
		*head = NULL;
	}
}
