#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_print - Prints the all hash table
  * @ht: The hash table to print
  */
void hash_table_print(const hash_table_t *ht)
{
	long unsigned int i, j;
	hash_node_t *temp;

	/* Check for no  table */
	if (!ht)
		return;

	if (ht->array == NULL)
	{
		/* Print nothing and return due to empty array */
		printf("{}\n");
		return;
	}

	/*iterate over the nodes until size to print for the main nodes*/
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		/*if node is empty, jump to next node */
		if (ht->array[i] == NULL)
			continue;
		else
			printf("%s: %s, ", ht->array[i]->key, ht->array[i]->value);
	}
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array[j]->next != NULL)
		{
			temp = ht->array[j]->next;
			while (temp->next)
			{
				printf("%s: %s, ", temp->key, temp->value);
				temp = temp->next;
			}
			printf("%s: %s", temp->key, temp->value);
		}
		else
			continue;
	}
	printf("}\n");
}
