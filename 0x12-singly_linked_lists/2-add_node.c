#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	unsigned int length = 0;

	while (*str != '\0')
	{
		length++; /* Get the size of str*/
		str++;
	}

	new_element = (list_t *) malloc(sizeof (list_t));
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
