#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * add_nodeint_end - A function that adds a node at the end
  * @head: The first node of the list
  * @n: value of the node
  *
  * Return: The add of the new list or Null in case of failure
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	newNode->n = n;

	newNode->next = NULL;

	if (!newNode)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		listint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	return (newNode);

}
