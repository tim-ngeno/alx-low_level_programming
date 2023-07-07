#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: the hash table to add an element to
 * @key: the key
 * @value: data part of key/value pair
 *
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index;
	hash_node_t *entry, *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[index];
	temp = entry;

	if (temp == NULL)
	{
		ht->array[index] = create_node(key, value);
		return (1);
	}

	while (entry != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = malloc(strlen(value) + 1);
			strcpy(temp->value, value);
			return (1);
		}
		temp = temp->next;
	}
	entry = create_node(key, value);
	if (entry == NULL)
		return (0);
	entry->next = ht->array[index];
	ht->array[index] = entry;
	return (1);
}

/**
 * create_node - creates a key value pair at position
 * @key: the key
 * @value: the value
 * Return: returns a key/value pair
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *entry = malloc(sizeof(hash_node_t));

	if (entry == NULL)
		return (NULL);

	entry->key = malloc(strlen(key) + 1);
	if (entry->key == NULL)
	{
		free(entry->key);
		return (NULL);
	}
	entry->value = malloc(strlen(value) + 1);
	if (entry->value == NULL)
	{
		free(entry);
		return (NULL);
	}

	strcpy(entry->key, key);
	strcpy(entry->value, value);
	entry->next = NULL;
	return (entry);
}
