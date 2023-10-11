#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of ints
 * @list: pointer to the head of the skip list
 * @value: value to search for
 *
 * Return: pointer to the first node of value, or NULL
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *prev, *node;

	if (!list)
		return (NULL);

	node = list->express;
	prev = list;

	while (node)
	{
		printf("Value checked at index [%ld] = [%d]\n",
			   node->index, node->n);
		if (node->n >= value)
			break;
		prev = node;
		node = node->express;
	}

	if (!node)
	{
		while (prev->next)
			prev = prev->next;
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   prev->index, node ? node->index : prev->index);

	/* Linear search within the range */
	while (prev && prev->n <= value)
	{
		printf("Value checked at index [%ld] = [%d]\n",
			   prev->index, prev->n);
		if (prev->n == value)
			return (prev);
		prev = prev->next;
	}

	return (NULL);
}
