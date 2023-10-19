#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
  * print_list - A function to print the a singly linked list
  *
  * @h: the singly linked list to print
  * Return: the counts of elements in the list
  */

size_t print_list(const list_t *h)
{
	size_t element = 0;

	while (h)
	{
		element++;

		if ((*h).str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%u] %s\n", (*h).len, (*h).str);
		}
		h = (*h).next;
	}
	return (element);
}
