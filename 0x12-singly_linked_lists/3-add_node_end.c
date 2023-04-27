#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

/**
 * add_node_end - adds a new node at the end of a list
 *
 * @head: pointer to pointer of  first node
 * @str: the input data for the last node
 *
 * Return: On success address of new element, otherwise NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp, *p;

	/* create new node */
	temp = malloc(sizeof(list_t));
	if (temp == NULL)
		return (NULL);

	/* add data to the new node */
	temp->str = strdup(str);
	if (temp->str == NULL)
	{
		free(temp);
		return (NULL);
	}

	temp->len = strlen(str);
	temp->next = NULL; /* last element points to NULL */

	if (*head == NULL)
	{
		*head = temp;
	}
	else
	{
		p = *head;
		while (p->next != NULL)
		{
			p = p->next;
		}
		p->next = temp;
	}
	return (*head);
}
