#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * print_listint - A function that prints singly linked integers.
  * @h: A singly linked arguments
  *
  * Return: Integer values in the singly linked list parameter.
  */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t elem_count = 0;

	if (!h)
	{
		return (1);
	}

	while (current->next != NULL)
	{
		printf("%d\n", current->n);
		elem_count++;
		current = current->next;
	}
	elem_count++;
	printf("%d\n", current->n);
	return (elem_count);
}
