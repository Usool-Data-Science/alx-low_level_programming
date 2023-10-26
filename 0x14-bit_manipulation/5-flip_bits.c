#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * flip_bits - A function that count bit to flip due to differences
  * @n: Integer 1.
  * @m: Integer 2.
  *
  * Return: Count of needed flips.
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;
	int XOR = n ^ m;

	while (XOR > 0)
	{
		counter += XOR & 1;
		XOR >>= 1;
	}
	return (counter);
}
