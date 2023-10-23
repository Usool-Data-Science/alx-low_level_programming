#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - A function to add up the values in a linked list
  * @head: The first node
  *
  * Return: Sum of all values in the node.
  */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	if (!head || head == NULL)
	{
		return (0);
	}

	while (current->next != NULL)
	{
		sum += current->n;
		current = current->next;
	}
	sum += current->n;

	return (sum);
}
