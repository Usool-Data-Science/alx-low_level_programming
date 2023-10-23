#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * delete_nodeint_at_index - A function to delete a specific node
  * @head: The first node of the list
  * @index: The specific index from which the node will be deleted
  *
  * Return: 1 for success and -1 for failure.
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int size = 0;
	listint_t *tempo, *previous, *current = *head;

	if (!head)
	{
		return (-1);
	}

	if (index == 0 && *head != NULL)
	{
		tempo = *head;
		*head = (*head)->next;
		free(tempo);
		return (1);
	}
	while (current != NULL && size < index)
	{
		previous = current;
		current = current->next;
		size++;
	}

	if (current == NULL)
	{
		return (-1);
	}

	previous->next = current->next;
	free(current);

	return (1);
}
