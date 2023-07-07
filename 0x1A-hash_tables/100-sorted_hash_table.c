#include "hash_tables.h"

/**
 * shash_table_create - creates a sorted hash table
 * @size: the hash table size
 *
 * Return: pointer to the new table, otherwise NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t) * 1);
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->shead = NULL;
	table->stail = NULL;
	table->array = malloc(sizeof(shash_node_t) * size);

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	}
	return (table);
}

/**
 * create_shash_entry - creates an entry for the sorted hash table
 * @key: the key
 * @value: data value
 *
 * Return: pointer to the new entry, otherwise NULL
 */
shash_node_t *create_shash_entry(const char *key, const char *value)
{
	shash_node_t *entry;

	entry = malloc(sizeof(shash_node_t));
	if (entry == NULL)
		return (NULL);
	entry->key = strdup(key);
	if (entry->key == NULL)
	{
		free(entry);
		return (NULL);
	}
	entry->value = strdup(value);
	if (entry->value == NULL)
	{
		free(entry->key);
		free(entry);
		return (NULL);
	}
	entry->next = entry->snext = entry->sprev = NULL;
	return (entry);
}

/**
 * insert_sorted_list - add an entry to the sorted
 * linked list (ASCII value)
 * @table: the sorted hash table
 * @entry: the node to add
 *
 * Return: nothing
 */
void insert_sorted_list(shash_table_t *table, shash_node_t *entry)
{
	shash_node_t *temp;

	if (table->shead == NULL && table->stail == NULL)
	{
		table->shead = table->stail = entry;
		return;
	}
	temp = table->shead;
	while (temp != NULL)
	{
		if (strcmp(entry->key, temp->key) < 0)
		{
			entry->snext = temp;
			entry->sprev = temp->sprev;
			temp->sprev = entry;
			if (entry->sprev != NULL)
				entry->sprev->snext = entry;
			else
				table->shead = entry;
			return;
		}
		temp = temp->snext;
	}
	entry->sprev = table->stail;
	table->stail->snext = entry;
	table->stail = entry;
}

/**
 * shash_table_set - inserts key/value pair in the hash table
 * @ht: sorted hash table
 * @key: the key
 * @value: data value
 *
 * Return: 1 on success, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *shn, *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
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
	shn = create_shash_entry(key, value);
	if (shn == NULL)
		return (0);
	shn->next = ht->array[index];
	ht->array[index] = shn;
	insert_sorted_list(ht, shn);
	return (1);
}

/**
 * shash_table_get - retrieve a value from the hash table
 * @ht: hash table
 * @key: key to the data
 *
 * Return: the value associated with key, or NULL otherwise
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *temp;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints the content of a sorted hash table
 * @ht: hash table to print
 *
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *temp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	temp = ht->shead;
	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - prints content of a sorted
 * hash table in reverse
 * @ht: hash table to print
 *
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *temp;
	char flag = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	temp = ht->stail;
	while (temp != NULL)
	{
		if (flag == 1)
			printf(", ");
		printf("'%s': '%s'", temp->key, temp->value);
		flag = 1;
		temp = temp->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes content of a sorted hash table
 * @ht: hash table to delete
 *
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *t;

	if (ht == NULL || ht->array == NULL || ht->size == 0)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i] != NULL)
		{
			t = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = t;
		}
	}
	free(ht->array);
	ht->array = NULL;
	ht->shead = ht->stail = NULL;
	ht->size = 0;
	free(ht);
}
