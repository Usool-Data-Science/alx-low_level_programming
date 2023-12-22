#include <stdio.h>
#include "hash_tables.h"

/**
  * key_index - Custom hash_function
  * @key: The string to hash.
  * @size: The table size
  *
  * Return: Hash value
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int value;

	value = hash_djb2(key);

	return (value % size);
}
