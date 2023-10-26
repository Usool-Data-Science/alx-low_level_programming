#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * print_binary - A function that convert decimal to binary.
  * @n: The Decimal number to convert
  *
  */

void print_binary(unsigned long int n)
{
	int bitSize = sizeof(n) * 8;
	int i, result;

	if (n == 0)
	{
		printf("0");
	}

	for (i = bitSize - 1; i >= 0; i--)
	{
		result = (n >> i) & 1;
		printf("%d", result);
	}
	printf("\n");
}
