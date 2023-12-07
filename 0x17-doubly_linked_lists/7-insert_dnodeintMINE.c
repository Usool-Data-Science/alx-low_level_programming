#include <stdio.h>
#include "lists.h"

/**
  * insert_dnodeint_at_index - Insert a node in a given index
  * @h: The first node of the list.
  * @idx: The index to insert to.
  * @n: The value to insert
  *
  * Return: The updated list.
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0, step = 0;
	dlistint_t *current;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!h || newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	current = *h;
	while (current)
	{
		count++;
		current = current->next;
	}
	if (idx > count)
	{
		return (NULL);
	}
	current = *h;
	while (current->next && step != idx - 1)
	{
		step++;
		current = current->next;
	}
	if (step == idx - 1 && current->next)
	{
		newNode->next = current->next;
		newNode->prev = current;
		current->next->prev = newNode;
		current->next = newNode;
		return (*h);
	}
	else
	{
		return (NULL);
	}

}
