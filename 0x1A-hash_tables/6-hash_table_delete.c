#include "hash_tables.h"

/**
  * hash_table_delete - delete a hash table
  * @ht: the hash table
  * Return: nothing
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
		free_list(ht->array[i]);

	free(ht->array);
	free(ht);
}

/**
  * free_list - free a list
  * @head: each list of the hash table
  * Return: nothing
  */

void free_list(hash_node_t *head)
{
	hash_node_t *savepoin = NULL;

	if (head != NULL)
	{
		while (head)
		{
			savepoin = head->next;
			free(head->key);
			free(head->value);
			free(head);
			head = savepoin;
		}
	}
}
