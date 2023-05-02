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
	listint_t *navigator = h;

	while (navigator != NULL)
	{
		number_of_nodes++;
		printf("%d\n", navigator->n);
		navigator = navigator->link;
	}
	return (number_of_nodes);
}
