#include "lists.h"
#include <stdio.h>

/**
 * print_list - print list
 * @h: the linked list
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t counts = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		counts++;
		h = h->next;
	}
	return (counts);
}
