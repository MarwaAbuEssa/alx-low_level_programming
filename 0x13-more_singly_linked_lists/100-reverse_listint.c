#include "lists.h"

/**
 * reverse_listint - Reverse a list
 * @head: pointer of address
 * Returen: pointer to the first node of reversed
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *forward, *backward;

	if (head == NULL || *head == NULL)
		return (NULL);

	backward = NULL;

	while ((*head)->next != NULL)
	{
		forward = (*head)->next;
		(*head)->next = backward;
		backward = *head;
		*head = forward;
	}

	(*head)->next = backward;
	return (*head);
}
