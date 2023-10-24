#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * listint_len - A function that counts the number of nodes in a list
  *
  * @h: The list under investigation.
  *
  * Return: Total number of nodes in the list.
  */

size_t listint_len(const listint_t *h)
{
	size_t elem_count = 0;
	const listint_t *current = h;

	if (!h)
	{
		return (1);
	}
	while (current != NULL && current->next != NULL)
	{
		/* Exit the loop without counting the last node */
		elem_count++;
		current = current->next;
	}
	/* Count the last node and return the total */
	elem_count++;
	return (elem_count);
}
