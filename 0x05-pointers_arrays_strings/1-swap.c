#include "main.h"
/**
  * swap_int - A function that swaps integers
  * @a: first pointer variable
  * @b: second pointer variable
  * Return: 0 for successful exit
  */

void swap_int(int *a, int *b)
{
	int c = *b;
	*b = *a;
	*a = c;
}
