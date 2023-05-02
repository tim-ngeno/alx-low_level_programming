#include "lists.h"

/**
 * sum_listint - sums all the data in a list
 *
 * @head: pointer to the head node
 *
 * Return: sum of the data values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p = head;

	if (head == NULL)
		return (0);

	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}

	return (sum);
}
