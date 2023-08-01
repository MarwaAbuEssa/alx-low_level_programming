#include "lists.h"


/**
 * add_nodeint_end - add node at the tail of list
 * @head: pointer of pointer to the head node
 * @n: node value
 * Return: number of nodes
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *new, *current;



	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new;
	}

	return (new);
}

