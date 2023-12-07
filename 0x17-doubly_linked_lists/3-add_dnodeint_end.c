#include <stdio.h>
#include "lists.h"

dlistint_t *createNewNode(const int n);

/**
  * add_dnodeint_end - Add note to the end of list.
  * @head: The first node in the list.
  * @n: The value of the new node to add.
  *
  * Return: The address of the updated node.
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (!head || newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
		newNode->prev = current;
	}

	return (*head);
}
