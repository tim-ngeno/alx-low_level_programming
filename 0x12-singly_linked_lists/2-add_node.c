#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 *
 * @head: pointer to the head node
 * @str: input string
 *
 * Return: pointer to the new  element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *link;

	link = malloc(sizeof(list_t));
	if (link == NULL)
		return (NULL);

	link->str = strdup(str);
	link->len = strlen(str);
	link->next = *head;
	*head = link;

	return (*head);
}
