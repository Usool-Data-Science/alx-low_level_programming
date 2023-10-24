#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * reverse_listint - A function to reverse a linked list
  * @head: The first node of the list
  *
  * Return: The new head node.
  *
  */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *current;

	while (*head)
	{
		current = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = current;
	}
	*head = previous;

	return (*head);
}
