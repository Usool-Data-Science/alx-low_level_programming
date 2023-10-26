#include <stdio.h>
#include "main.h"

/**
 * print_binary - Convert a decimal number to binary and print it.
 * @n: The decimal number to convert
 */
void print_binary(unsigned long int n)
{
    int bitSize = sizeof(n) * 8;
    int i;

    if (n == 0)
    {
        printf("0");
        return;
    }

    for (i = bitSize - 1; i >= 0; i--)
    {
        int result = (n >> i) & 1;
        printf("%d", result);
    }
    printf("\n");
}
