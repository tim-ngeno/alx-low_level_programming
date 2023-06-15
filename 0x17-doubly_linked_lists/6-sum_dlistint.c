#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in linked list
 * @head: pointer to the head node
 * Return: total sum, otherwise 0
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	unsigned int sum = 0;

	if (head)
	{
		while (tmp != NULL)
		{
			sum += tmp->n;
			tmp = tmp->next;
		}
		return (sum);
	}

	return (sum);
}
