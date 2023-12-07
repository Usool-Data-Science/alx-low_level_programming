#include <stdio.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *current = *head;

	if (!head || *head == NULL)
		return (NULL);
	if (index == 0)
	{
		if (current->next)
		{
			*head = current->next;
			current->next->prev = NULL;
		}


	}
	while (current->next && count < index)
}
