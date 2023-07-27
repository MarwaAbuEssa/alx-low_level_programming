#include "lists.h"

/**
 * list_len - number of nodes in list
 * @h: the linked list
 * Return: return number of elements in given list
 */

size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
