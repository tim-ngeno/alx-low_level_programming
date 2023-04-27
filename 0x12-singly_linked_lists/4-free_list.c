#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees the list list_t
 *
 * @head: the head node
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
		p = head->next;
		free(head->str);
		free(head);
		head = p;
	}
}
