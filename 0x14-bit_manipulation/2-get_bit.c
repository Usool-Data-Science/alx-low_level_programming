#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * get_bit - Indicate if a bit at index is turned on.
  * @n: The integer being converted.
  * @index: The particular index under inspection.
  *
  * Return: 1 if turned on, -1 if error.
  */

int get_bit(unsigned long int n, unsigned int index)
{
	int result;
	unsigned int bitSize = sizeof(n) * 8;

	/* Check if n is positive and the index is within bit size range*/
	if (n > 1 && index < bitSize)
	{
		result = (n & (1 << index)) > 0 ? 1 : 0;
		return (result);
	}
	return (-1);
}
