#include "hash_tables.h"

/**
* hash_table_create - create a hash table
* @size: size of the table
* Return: The position memory where is stored the table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	hash_node_t **head_array = NULL;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;

	head_array = malloc(sizeof(hash_table_t *) * size);
	if (head_array == NULL)
		return (NULL);

	ht->array = head_array;

	return (ht);
}
