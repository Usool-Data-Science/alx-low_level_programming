#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - A function to free a list
  * @head: The list to free
  *
  */

void free_listint(listint_t *head)
{
	listint_t *current;

	if (!head)
	{
		return;
	}

	while (head != NULL)
	{
		current = head->next;
		free(head);
		head = current;
	}
}
