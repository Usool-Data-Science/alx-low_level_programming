#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_create - Create a new hash_table
  * @size: The size of the table.
  *
  * Return: A pointer to a new hash table.
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int j;
	hash_table_t *new_table;

	if (!size)
		return (NULL);

	new_table = (hash_table_t *) malloc(sizeof(hash_table_t));

	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = (hash_node_t **) malloc(size * sizeof(hash_node_t *));

	if (!new_table->array)
		return (NULL);

	for (j = 0; j < size; j++)
	{
		new_table->array[j] = NULL;
	}

	return (new_table);
}
