#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Insert a node at a given index.
 * @h: Pointer to the head of the list.
 * @idx: Index at which the new node should be inserted.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the new node, or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *current;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!h || !newNode)
		return (NULL);

	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *h;
		newNode->prev = NULL;
		if (*h)
			(*h)->prev = newNode;
		*h = newNode;
		return (newNode);
	}

	current = *h;
	while (current && count < idx - 1)
	{
		count++;
		current = current->next;
	}

	if (current)
	{
		newNode->next = current->next;
		newNode->prev = current;
		if (current->next)
			current->next->prev = newNode;
		current->next = newNode;
		return (newNode);
	}

	free(newNode);
	return (NULL);
}
