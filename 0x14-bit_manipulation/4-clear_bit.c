#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * clear_bit - A function that sets the value of a bit to 0 at an index
  * @n: Pointer to the integer.
  * @index: Index starting from 0 of the bit to set.
  *
  * Return: 1 for success or -1 for failure.
  */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitSize = sizeof(*n) * 8;

	if (index < bitSize)
	{
		*n = (*n & ~(1 << index));
		return (1);
	}
	return (-1);
}
