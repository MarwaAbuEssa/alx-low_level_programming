#include "lists.h"
#include <stdio.h>


/**
 * delete_nodeint_at_index - delete node at position
 * @head: head node
 * @index: position where to delete the node
 * Return: (1) or (-1)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del, *ptr = *head;
	unsigned int pos;


	if (ptr == NULL)
		return (-1);


	if (index == 0)
	{
		*head = (*head)->next;
		free(ptr);
		return (1);
	}

	for (pos = 0; pos < (index - 1); pos++)
	{
		if (ptr->next == NULL)
			return (-1);

		ptr = ptr->next;
	}

	del = ptr->next;
	ptr->next = del->next;
	free(del);

	return (1);
}
