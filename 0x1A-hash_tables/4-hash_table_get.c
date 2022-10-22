#include "hash_tables.h"

/**
  * hash_table_get - create a index for the key in the hash table
  * @ht:  the hash table
  * @key: is the key
  * Return: the value associate to the key
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *list = NULL;

	if (!ht || !key)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	list = ht->array[idx];

	if (!list)
		return (NULL);

	while (list)
	{
		if (!strcmp(list->key, key))
			return (list->value);
		list = list->next;
	}
	return (NULL);
}
