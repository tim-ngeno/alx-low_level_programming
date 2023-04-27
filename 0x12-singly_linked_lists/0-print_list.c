#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list
 *
 * @h: the first node of the list
 *
 * Return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t n;

	n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}

		n += 1;
	}

	return (n);
}
