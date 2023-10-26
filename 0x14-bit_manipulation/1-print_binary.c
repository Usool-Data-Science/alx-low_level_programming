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
	int bitmask = 1, i;
	char result;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = 0; i < bitSize; i++)
	{
		result = (n & bitmask) ? '1': '0';
		printf("%c", result);
		bitmask <<= 1;
	}
	printf("\n");
	return;
}
