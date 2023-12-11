#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * get_endianness - A function that checks endianness.
  *
  * Return: 0 if big endian, 1 if little endian.
  */

int get_endianness(void)
{
	char *message;
	int index;

	index = 1;
	message = (char *)&index;

	return (*message);
}
