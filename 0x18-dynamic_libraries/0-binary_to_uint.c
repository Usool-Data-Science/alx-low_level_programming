#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * binary_to_uint - Converts binary number to unsigned int.
  * @b: Strings of binary numbers to convert
  *
  * Return: The integer value of the binary number or 0 if no binary.
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int size = 0, sum = 0;

	if (!b)
	{
		return (0);
	}

	for (size = 0; b[size] != '\0'; size++)
	{
		if (b[size] == '1' || b[size] == '0')
		{
			sum = ((sum << 1) | (b[size] - '0'));
		}
		else
		{
			return (0);
		}
	}
	return (sum);
}
