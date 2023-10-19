#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

size_t print_list(const list_t *h)
{
	size_t element = 0;

	while (h != NULL)
	{
		element++;

		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", (*h).len, (*h).str);
		h = h->next;
		}
	}
	return (element);
}
