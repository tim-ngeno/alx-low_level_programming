#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @key: the key
 * @value: data part of key/value pair
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *entry, *temp;

	index = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[index];

	if (entry == NULL)
	{
		ht->array[index] = create_node(key, value);
		return (1);
	}

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
		{
			free(entry->value);
			entry->value = malloc(strlen(value) + 1);
			strcpy(entry->value, value);
		}

		temp = entry;
		entry = temp->next;
	}
	temp->next = create_node(key, value);
	if (temp->next == NULL)
		return (0);
	temp->next->next = ht->array[index];
	ht->array[index] = temp->next;
	return (1);
}

/**
 * create_node - creates a key value pair at position
 * Return:
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *entry = malloc(sizeof(hash_node_t));

	if (entry == NULL)
		return (NULL);

	entry->key = malloc(strlen(key) + 1);
	entry->value = malloc(strlen(value) + 1);

	strcpy(entry->key, key);
	strcpy(entry->value, value);

	entry->next = NULL;

	return (entry);
}
