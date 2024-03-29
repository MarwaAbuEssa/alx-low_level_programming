#include "lists.h"

/**
 * free_listint - free the list
 * @head: header pointer
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
