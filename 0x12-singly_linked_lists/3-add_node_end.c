#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node_end - The function that add a new node to the end of a list
  * @head: The first node of the list
  * @str: The string member of the node
  *
  * Return: The address of the new node
  */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_end_node;
	unsigned int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	new_end_node = (list_t *) malloc(sizeof(list_t));
	if (new_end_node == NULL)
	{
		return (NULL);
	}
	(*new_end_node).str = strdup(str);
	(*new_end_node).len = length;
	(*new_end_node).next = NULL;

	if ((*head) == NULL)
	{
		(*head) = new_end_node;
	}
	else
	{
		list_t *current = (*head);

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_end_node;
	}
	return (new_end_node);
}
