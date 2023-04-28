#include "lists.h"
#include <string.h>
/**
 * add_node_end - added node
 * @head: header pointer
 * @str: string to be added
 * Return: return the added node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *added, *temp;

	added = malloc(sizeof(list_t));
	if (added == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(added);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	added->str = dup;
	added->len = len;
	added->next = NULL;

	if (*head == NULL)
		*head = added;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = added;
	}

	return (added);
}
