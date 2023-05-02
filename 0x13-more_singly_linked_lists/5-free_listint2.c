#include "lists.h"

/**
 * free_listint2 - free the list
 * @head: header pointer
 */

void free_listint2(listint_t **head)
{
	listint_t *current;


	while (*head)
	{
		current = *head->next;
		free(*head);
		*head = current;
	}

	head = NULL;
}
