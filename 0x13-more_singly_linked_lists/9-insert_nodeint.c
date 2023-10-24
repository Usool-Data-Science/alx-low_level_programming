#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - A node inserter at a specific index
  * @head: the first node of the lsit
  * @idx: The index to insert the new node
  * @n: The value of the new index
  *
  * Return: The address of the new node.
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int size = 0;
	listint_t *current = *head;
	listint_t *temp = NULL;
	listint_t *newNode = (listint_t *)malloc(sizeof(listint_t));

	if (!head || !newNode)
	{
		return (NULL);
	}
	newNode->n = n;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}

	while (size < idx - 1  && current != NULL)
	{
		current = current->next;
		size++;
	}

	temp = current->next;
	newNode->next = temp;
	current->next = newNode;

	return (newNode);
}
