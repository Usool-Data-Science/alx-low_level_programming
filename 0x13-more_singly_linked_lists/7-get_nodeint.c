#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * get_nodeint_at_index - A function to return a node at an index
  * @head: The head of the the list
  * @index: Index to return
  *
  * Return: The address of the list.
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *current = head;

	if (!head)
	{
		return (NULL);
	}

	while (counter < index && current->next != NULL)
	{
		current = current->next;
		counter++;
	}

	if (counter != index)
	{
	/* if the counter is not exactly on the index, then indexx is out of range*/
		return (NULL);
	}
	return (current);
}
