#include <stdio.h>
#include <stdlib.h>
#include "string.h"
#define ARRAY_SIZE 1000

// 1. Create an hash function.
int hash_func(char *key)
{
    int hash_value = 0;

    for (int i = 0; key[i]; i++)
    {
        hash_value += key[i];
    }
    return (hash_value % 1000);
}

// 4. Create a function for creating new item and new table
Item* create_item(char *key, char *value)
{
    // Allocate memory for a new item
    Item *new_item = (Item*) malloc(sizeof(Item));
    if (new_item == NULL)
    {
        perror("Cant allocate memory for new item\n");
        exit(EXIT_FAILURE);
    }
    // Allocate memory for the attributes of the item
    new_item->key = (char *) malloc(sizeof(key) + 1);
    new_item->value = (char *) malloc(sizeof(value) +1);
    if (!new_item->key || !new_item->value)
    {
        perror("Can't allocate mem for key or value\n");
    }

    strcpy(new_item->key, key);
    strcpy(new_item->value, value);

    return (new_item);
}

// 5. Create the hash_table
Hash_table *create_hash_table(int size)
{
    // Allocate mem for a new table
    Hash_table *new_table = (Hash_table*) malloc(sizeof(Hash_table));
    if (!new_table)
    {
        perror("Can't allocate mem for a new hash_table\n");
        exit(EXIT_FAILURE);
    }
    // Assign attributes of the table i.e. the size, count and item.
    new_table->size = size;
    new_table->count = 0;
    new_table->items = (Item**) calloc(size, sizeof(new_table->items));
    if (!new_table->items)
    {
        perror("Can't allocate mem for item in hash_table\n");
        exit(EXIT_FAILURE);
    }
    // Dont forget to initial the mem of each item to NULL.
    for (int i = 0; i < new_table->size; i++)
    {
        new_table->items[i] = NULL; // Initialize each array node to NULL.
    }

    return (new_table);
}

// 6. Write a function to free the items
void free_item(Item *item)
{
    // Because we allocated mem for keys and values they must be freed

    free(item->key);
    free(item->value);
    free(item);
}

// 7. Free table
void free_table(Hash_table *table)
{
    for (int i = 0; i < table->size; i++)
    {
        Item *item = table->items[i];

        if (item)
            free_item(item);
    }
    free(table->items);
    free(table);
}

// 8. Print items
void print_items(Hash_table *table)
{
    for (int i; i < table->size; i++)
    {
        printf("======= Item %d ========\n", i);
        if (table->items[i])
        {
            printf("Index: %d has key: %s and value: %s\n",
                    table->items[i]->key, table->items[i]->value);
        }
        printf("========================\n\n");
    }
}
