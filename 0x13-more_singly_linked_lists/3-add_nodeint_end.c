#include "lists.h"
#include <stdio.h>


/**
 * add_nodeint_end - add node at the tail of list
 * @head: pointer of pointer to the head node
 * @n: node value
 * Return: number of nodes
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new = NULL;
	listint_t *current = NULL;


	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->next = NULL;
	new->n = n;

	current = *head;
	if (current == NULL)
		return (NULL);

	while (current != NULL)
	{
		if (current->next == NULL)
		{
			current->next = new;

		}
		else
			current = current->next;
	}


	return (new);
}
