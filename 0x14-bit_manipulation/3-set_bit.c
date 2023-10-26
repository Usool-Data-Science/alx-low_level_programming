#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * set_bit - A function that sets the value of a bit to 1 at an index
  * @n: A pointer to the integer.
  * @index: The index to switch on.
  *
  * Return: 1 if it worked or -1 if an error occured
  */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bitSize = sizeof(*n) * 8;

	if (index < bitSize)
	{
		*n += (1 << index);
		return (1);
	}

	return (-1);
}
