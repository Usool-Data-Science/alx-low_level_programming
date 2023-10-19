#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * free_list - A function to free a singly linked list
  * @head: The first of the list
  *
  * Return: Nothing.
  */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = (*head).next;
		free((*head).str);
		free(head);
		head = current;
	}
}
