#include <stdio.h>
#include "hash_tables.h"

/**
  * free_list - Frees a collision linkedlist
  * @head: The head of the list.
  */
void free_list(hash_node_t *head)
{
	hash_node_t *temp;

	if (!head)
		return;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->key);
		free(temp->value);
		free(temp);
	}

}

/**
  * hash_table_delete - Deletes the hash table
  * @ht: The hash_table to delete
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;

	if (!ht || ht->array == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
			free_list(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
