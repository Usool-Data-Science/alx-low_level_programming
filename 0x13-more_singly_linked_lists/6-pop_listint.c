#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - A function to free and return the value of a node in a list
  * @head: the node to delete.
  *
  * Return: The value of the popped node.
  */

int pop_listint(listint_t **head)
{
	int value = 0;
	listint_t *current;

	if (!head || *head == NULL)
	{
		return (0);
	}

	current = (*head)->next;
	value = (*head)->n;

	free(*head);
	*head = current;

	return (value);
}
