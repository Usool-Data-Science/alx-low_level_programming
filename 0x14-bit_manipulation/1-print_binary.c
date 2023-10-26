#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * print_binary - Print the binary form of an integer
  * @n: The integer to divide.
  */

void print_binary(unsigned long int n)
{
	/* Divide n by 2 until it is not greater than 1*/
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	/* if n smaller than 1 return the in corresponding char*/
	_putchar((n & 1) + '0');
}
