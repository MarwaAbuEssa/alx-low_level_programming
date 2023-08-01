#include "lists.h"
#include <stdio.h>


/**
 * insert_nodeint_at_index - insert node at position
 * @head: head node
 * @idx: position where to insert the node
 * @n: node value
 * Return: inserted node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr = *head;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = ptr;
		*head = new;
		return (new);
	}
	while (idx != 1)
	{
		idx--;
		if (ptr == NULL || ptr->next == NULL)
			return (NULL);
		ptr = ptr->next;
	}
	new->next = ptr->next;
	ptr->next = new;

	return (new);
}
