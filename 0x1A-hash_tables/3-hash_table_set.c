#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_set - Inserts node into a has table.
  * @ht: The hast table to populate.
  * @key: The key of the node.
  * @value: The node's value.
  *
  * Return: 1 for success and 0 for failure
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	/* 1. Find the hash value and create temp item for iteration */
	unsigned long int index = hash_djb2((const unsigned char *) key) % ht->size;
	hash_node_t *temp_item, *item;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	/* 2. Create item */
	item = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (!item)
		return (0);
	item->key = strdup((char *) key);
	item->value = strdup((char *) value);
	item->next = NULL;

	/* 3. Check if the index item is null */
	if (ht->array[index] == NULL)
	{
		ht->array[index] = item;
	}

	/* 4. If it is not null */
	else
	{
		/* Check if its only a single node */
		if (ht->array[index]->next == NULL)
			ht->array[index]->next = item;
		else
		/* Otherwise move to the end and attach it*/
		{
			temp_item = ht->array[index];
			while (temp_item->next)
				temp_item = temp_item->next;
			temp_item->next = item;
		}
	}

	return (1);
}
