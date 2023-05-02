#include "lists.h"
#include <stdio.h>


/**
 * print_listint - print and return nodes
 * @h: header pointer
 * Return: number of nodes
 */


size_t print_listint(const listint_t *h)
{
	size_t number_of_nodes = 0;

	while (h != NULL)
	{
		number_of_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (number_of_nodes);
}
