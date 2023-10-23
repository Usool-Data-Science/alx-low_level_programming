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
	if (!head)
	{
		return;
	}
	while (*head != NULL)
	{
		listint_t *current = (*head)->next;
		*head = current;
	}
	(*head) = NULL;
}
