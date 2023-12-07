#include <stdio.h>
#include "lists.h"

/**
  * add_dnodeint - A function that add a new node at the beginning.
  * @head: The head of the linked list.
  * @n: The value of the new node to add
  *
  * Return: The head of the updated node.
  */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode = createNewNode(n);

	if (!head)
	{
		return (NULL);
	}

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		newNode->next = *head;
		(*head)->prev = newNode;
		*head = newNode;
	}
	return (*head);
}

/**
  * createNewNode - A function that creates new Node.
  * @n: The value of the new node to create
  *
  * Return: The head of the new node created.
  */

dlistint_t *createNewNode(const int n)
{
	dlistint_t *newNode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newNode == NULL)
	{
		printf("Can't Allocate memory for new node\n");
		return (NULL);
	}

	/* Allocate the values of the newNode respectively */
	/**
	 * newNode = {n, NULL, NULL};
	 * This allocation is wrong
	 * It is used only at the point of declaration not
	 * when we allocate memory with malloc.
	 */

	newNode->n = n;
	newNode->next = NULL;
	newNode->prev = NULL;

	return (newNode);
}
