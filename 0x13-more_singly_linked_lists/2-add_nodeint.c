#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint - A function that adds new node to beginning of a list
  * @n: The value in the node
  * @head: The header of the list.
  *
  * Return: Address of newly added node.
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *current;

	current = (listint_t *)malloc(sizeof(listint_t));
	if (!current)
	{
		return (NULL);
	}

	current->n = n;
	/* Let the current value point to the previous head*/
	current->next = *head;
	/* Now update the new head position to the current value*/
	*head = current;
	return (*head);
}
