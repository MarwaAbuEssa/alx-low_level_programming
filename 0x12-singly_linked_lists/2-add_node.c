#include "lists.h"
#include <string.h>
/**
 * add_node - added node
 * @head: header pointer
 * @str: string to be added
 * Return: return the added node
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	int len;
	list_t *added;

	added = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	dup = strdup(str);
	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = dup;
	new->len = len;
	new->next = *head;

	*head = added;

	return (added);
}
