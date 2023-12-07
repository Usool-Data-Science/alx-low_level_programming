#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - A function that prints doubly linked list
 * @h: The head of the linked list
 *
 * Return: Count of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;
	const dlistint_t *current = h;

	if (!h)
		return (n);

	while (current->next != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		n++;
	}
	n++;
	printf("%d\n", current->n);
	return (n);
}
