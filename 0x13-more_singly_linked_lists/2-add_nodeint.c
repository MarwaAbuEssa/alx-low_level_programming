#include "lists.h"
#include <stdio.h>


/**
 * add_nodeint - add node at the head of list
 * @head: pointer of pointer to the head node
 * @n: node value
 * Return: number of nodes
 */


listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}

