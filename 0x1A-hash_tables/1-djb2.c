#include "hash_tables.h"

/**
* hash_djb2 -	Function implementing the djb2 algorithm.
*				Get hash value)
* @str:			Key to get the hash value in the table
* Return:		The hash value of the key
*/

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
