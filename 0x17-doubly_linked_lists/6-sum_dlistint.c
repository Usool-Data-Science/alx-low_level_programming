#include <stdio.h>
#include "lists.h"

/**
  * sum_dlistint - Add up all the values of the nodes.
  * @head: The first node of the list
  *
  * Return: The sum of all nodes' values.
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (!head)
	{
		return (0);
	}

	while (head->next)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;

	return (sum);
}
