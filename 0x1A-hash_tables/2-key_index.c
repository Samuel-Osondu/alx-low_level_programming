#include "hash_tables.h"

/**
* key_index -	Create an index for the key in the hash table
* @size:		Size of the array of the hash table
* @key:			Is the key
* Return:		Returns the index of the key in the hash code
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int key_idx = 0;

	key_idx = hash_djb2(key) % size;

	return (key_idx);
}
