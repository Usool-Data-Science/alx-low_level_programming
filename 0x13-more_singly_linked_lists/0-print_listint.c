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
	const listint_t *current;

	if (h)
	{
		current = h;
	}
	else
	{
		return (1);
	}

	while (current->next != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
	printf("%d\n", current->n);
	return (0);
}
