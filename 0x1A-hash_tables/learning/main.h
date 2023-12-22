#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int hash_func(char *key);

// 2. Create the Item with key value pairs.
typedef struct Item
{
    char *key;
    char *value;
} Item;

// 3. Define the hash table itself
typedef struct Hash_table
{
    Item** items; //This is the array of items in the table.
    int size; // This is the number possible columns in the table
    int count; // The number of present elements.
} Hash_table;

// 4. Create a function for creating new item and new table
Item* create_item(char *key, char *value);

// 5. Create the hash_table
Hash_table *create_hash_table(int size);

// 6. Write a function to free the items
void free_item(Item *item);
// 7. free tables
void free_table(Hash_table *table);

// 8. Print items
void print_items(Hash_table *table);
#endif /* MAIN_H */
