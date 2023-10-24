#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * print_listint_safe - Prints list in a safe way
  * @head: The first node of the list.
  *
  * Return: The total node in the list.
  */

size_t print_listint_safe(const listint_t *head)
{
	listint_t *current = head->next;
	size_t elem_count = 0;

	if (!head)
	{
		return (98);
	}

	while (current->next != NULL)
	{
		elem_count++;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}
	return (elem_count);
}
