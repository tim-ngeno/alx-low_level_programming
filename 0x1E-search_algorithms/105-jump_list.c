#include "search_algos.h"
#include <math.h>

/**
 * jump_list - find a value in a singly linked list using jump search
 * @list: pointer to the head of the singly linked list
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: pointer to the first node containing value, Null otherwise
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev, *curr;
	unsigned int jump, idx;

	if (list == NULL || size == 0)
		return (NULL);

	jump = sqrt(size);
	prev = list;
	curr = list;

	while (curr && curr->n < value)
	{
		printf("Value checked at index [%ld] = [%d]\n", curr->index, curr->n);
		idx = 0;
		prev = curr;

		while (idx < jump && curr->next)
		{
			curr = curr->next;
			idx++;
		}
	}

	printf("Value found between indexes [%ld]  and [%ld]\n", prev->index, curr->index);

	while (prev && prev->n <= value)
	{
		printf("Value checked at index [%ld] = [%d]\n", prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
