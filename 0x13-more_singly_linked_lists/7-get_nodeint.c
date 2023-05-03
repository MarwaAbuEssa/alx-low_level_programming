#include "lists.h"
#include <stdio.h>


/**
 * get_nodeint_at_index - get the node value at certain index
 * @head: pointer to heade
 * @index: required index
 * Return: node
 */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = NULL;
	unsigned int pos = 0;


	if (head == NULL)
		return (NULL);

	current = head;

	while (current->next != NULL)
	{
		if (pos == index)
			return (current);

		pos++;
		current = current->next;
	}


}
