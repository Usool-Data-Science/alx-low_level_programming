#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * find_listint_loop - find the loop in a list
  * @head: The first node in the loop
  *
  * Return - Null if no node is found.
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint *back = head;
	listint *front = head;

	if (!head)
	{
		return (NULL);
	}

	while (front->next && front && slow)
	{
		front = front->next->next;
		back = back->next;

		if (front == back)
		{
			back = head;
			while (back != front)
			{
				front = front->next;
			}
			return front;
		}
	}
	return (NULL);
}
