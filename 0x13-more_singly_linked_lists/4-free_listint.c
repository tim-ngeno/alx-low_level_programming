#include "lists.h"

/**
 * free_listint - frees a list listint_t
 *
 * @head: the head node pointer
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head);
		head = p;
	}
}
