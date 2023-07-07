#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with
 * a key  from the table
 * @ht: the hash table to retrieve from
 * @key: the key to look for
 *
 * Return: value if found, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *entry;

	index = key_index((const unsigned char *)key, ht->size);
	entry = ht->array[index];

	if (entry == NULL)
		return (NULL);

	while (entry != NULL)
	{
		if (strcmp(entry->key, key) == 0)
			return (entry->value);

		entry = entry->next;
	}

	return (NULL);
}
