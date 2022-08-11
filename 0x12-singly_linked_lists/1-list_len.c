#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: singly linked list.
 *
 * Return: the number of elements in a linked list_t list.
 */
size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		h = h->next;
		nelem++;
	}
	return (nelem);
}
