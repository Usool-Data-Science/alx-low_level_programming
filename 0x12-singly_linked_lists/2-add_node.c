#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - A function to add node to the beginning of a list
  * @head: the first node
  * @str: the string data for the node
  *
  * Return: pointer to the new node
  */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	unsigned int length = 0;

	while (str[length] != '\0')
	{
		length++; /* Get the size of str*/
	}

	new_element = (list_t *) malloc(sizeof(list_t));
	if (new_element == NULL)
	{
		return (NULL);
	}
	/* Allocate elements to the new node*/
	(*new_element).str = strdup(str);
	(*new_element).len = length;
	(*new_element).next = (*head);

	(*head) = new_element;

	return (*head);
}
