#include <stdio.h>
#include "lists.h"

/**
  * get_dnodeint_at_index - Gets the value of a node at an index
  * @head: The first node of the list.
  * @index: The index to return.
  *
  * Return: Value at that index.
  */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (!head)
	{
		return (NULL);
	}
	while (head->next && count != index)
	{
		count++;
		head = head->next;
	}
	if (count == index)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}
