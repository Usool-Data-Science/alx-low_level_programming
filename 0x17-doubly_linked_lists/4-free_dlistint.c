#include <stdio.h>
#include "lists.h"

/**
  * free_dlistint - Free all nodes in a linked list.
  * @head: The first node of the linked list.
  *
  * Return: None
  */
void free_dlistint(dlistint_t *head)
{
	if (!head)
	{
		return;
	}

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}
