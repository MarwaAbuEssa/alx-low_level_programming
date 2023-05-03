#include "lists.h"
#include <stdio.h>


/**
 * sum_listint - get sum of list
 * @head: pointer to heade
 * Return: sum
 */


int sum_listint(listint_t *head)
{
	int sum = 0;


	while (head != NULL)
	{
		sum += head->n;
		head = head->next;

	}

	return (sum);
}
