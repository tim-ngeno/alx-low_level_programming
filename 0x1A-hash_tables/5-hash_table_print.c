#include "hash_tables.h"

/**
 * hash_table_print - prints the content of hash table
 * @ht: the hash table input
 *
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *temp;
	char t = 0;

	if (ht == NULL || ht->array == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		temp = ht->array[i];
		while (temp != NULL)
		{
			if (t == 1)
				printf(", ");
			printf("'%s' : '%s'", temp->key, temp->value);
			t = 1;
			temp = temp->next;
		}
	}
	printf("}\n");
}
