#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

size_t free_listint_safe(listint_t **h)
{
	size_t freedNodes = 0;

	if (h == NULL || *h == NULL)
	{
		return (freedNodes);
	}

	while (*h != NULL)
	{
		int nodeoffset = *h - (*h)->next;
		listint_t
	}
}
