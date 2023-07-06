#include "hash_tables.h"

/**
 * key_index - retrieves the index of a  key
 * @key: the key value
 * @size: size of the array
 *
 * Return: index of key/value pair on success
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
