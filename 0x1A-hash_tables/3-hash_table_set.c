#include "hash_tables.h"

/**
  * hash_table_set - adds an element to the hash table
  * @value: value associated with the key
  * @key: is the key
  * @ht: hash table you want to add or update the key/value
  * Return: 1 in success 0 in otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node = NULL, *list = NULL;
	unsigned long int idx = 0;

	if (key == NULL || value == NULL || ht == NULL || *key == '\0')
		return (0);

	idx = key_index((const unsigned char *) key, ht->size);
	list = (ht->array)[idx];

	if (list != NULL)
	{
		while (list)
		{
			if (!strcmp(list->key, key))
			{
				free(list->value);
				list->value = strdup(value);
				if (list->value == NULL)
					return (0);
				return (1);
			}
			list = list->next;
		}
	}

	node = h_n_create(key, value);
	if (node == NULL)
		return (0);

	node->next = (ht->array)[idx];
	(ht->array)[idx] = node;

	return (1);
}

/**
  * h_n_create - create a hash node
  * @key:  is the key name
  * @value: value associated with the key
  * Return: the position memory where is stored the head
  */

hash_node_t *h_n_create(const char *key, const char *value)
{
	hash_node_t *new;

	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (NULL);

	new->key = strdup(key);

	new->value = strdup(value);
	if (new->value == NULL || new->key == NULL)
	{
		free(new);
		return (NULL);
	}

	new->next = NULL;

	return (new);
}
