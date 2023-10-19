#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * list_len - A function to return the length of a linked list
  * @h: Pointer to the linked list of interest
  *
  * Return: count of the nodes in the linked list.
  */

size_t list_len(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;
		if ((*h).next == NULL)
		{
			return (element);
		}
		h = (*h).next;
	}
	return (element);
}
