#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - A function ot assign Null to the head node
  * @head: the head node.
  *
  * Return: Null in case of failure or nothing.
  */

void free_listint2(listint_t **head)
{
	listint_t *current;

	if (!head)
	{
		return;
	}
	while (*head != NULL)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
	}
	(*head) = NULL;
}
