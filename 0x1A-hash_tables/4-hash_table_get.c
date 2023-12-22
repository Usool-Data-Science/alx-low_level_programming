#include <stdio.h>
#include "hash_tables.h"

/**
  * hash_table_get - A function to retrieve value from hash table.
  * @ht: The hash table.
  * @key: The key of the index needed.
  *
  * Return: The value of at index.
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	/*check for null tables and keys */
	if (!ht || !key)
		return (NULL);

	/* find the hash value for the key */
	index = hash_djb2((const unsigned char *)key) % ht->size;

	/* if ht->item[index] is null return NULL */
	if (ht->array[index] == NULL)
		return (NULL);

	/* otherwise loop until you find a key that match & return value*/
	temp = ht->array[index];
	while ((strcmp(temp->key, (char *)key) != 0) && temp->next != NULL)
	{
		temp = temp->next;
	}
	if (strcmp(temp->key, (char *)key) != 0)
		return (NULL);
	else
		return (temp->value);
}
