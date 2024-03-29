#include "lists.h"
#include <stdio.h>


/**
 * pop_listint - popup the head node and return it
 * @head: pointer to heade
 * Return: head data
 */


int pop_listint(listint_t **head)
{
	listint_t *current = NULL;
	int head_value;

	if (*head == NULL)
		return (0);
	current = *head;
	head_value  = current->n;
	*head = current->next;


	free(current);

	return (head_value);
}
