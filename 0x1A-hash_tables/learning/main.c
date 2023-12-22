#include <stdio.h>
#include <string.h>
#include "main.h"


int main(void)
{
    int r1 = hash_func("Hello");
    Item* item = create_item("Adeshina", "Ibrahim");
    Hash_table* table = create_hash_table(20);

    return (0);
}
