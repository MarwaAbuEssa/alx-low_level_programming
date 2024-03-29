#include "lists.h"
#include <stdio.h>


/**
 * listint_len - return nodes
 * @h: header pointer
 * Return: number of node
 */

size_t listint_len(const listint_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		number_of_nodes++;
		h = h->next;
	}
	return (number_of_nodes);
}
