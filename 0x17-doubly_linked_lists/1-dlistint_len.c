#include <stdio.h>
#include "lists.h"
/**
  * dlistint_len - Count number of elements in a linked list.
  * @h: The head node of the linked list
  *
  * Return: Number of elements in the list.
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *current = h;

	if (!h)
	{
		return (count);
	}
	while (current->next != NULL)
	{
		count++;
		current = current->next;
	}
	count++;
	return (count);
}
