#include "hash_tables.h"

/**
  * hash_table_print - print a hash table
  * @ht: hash table
  * Return: nothing
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int sizeh_table = 0, i = 0;
	hash_node_t **hash_table_list = NULL, *list = NULL;
	int flag_coma_space = 0;

	if (ht == NULL)
		return;
	hash_table_list = ht->array;
	sizeh_table = ht->size;

	printf("{");
	for (i = 0; i < sizeh_table; i++)
	{
		list = hash_table_list[i];
		if (list != NULL)
		{
			while (list)
			{
				if (!flag_coma_space)
				{
					printf("'%s': '%s'", list->key, list->value);
					flag_coma_space = 1;
				}
				else
					printf(", '%s': '%s'", list->key, list->value);
				list = list->next;
			}
		}
	}
	printf("}\n");
}
