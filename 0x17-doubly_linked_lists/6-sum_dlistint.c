#include "lists.h"

/**
 * sum_dlistint - get Sums of list.
 * @head:  header pointer .
 *
 * Return: sum nodes.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
