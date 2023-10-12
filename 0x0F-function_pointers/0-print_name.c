#include <stdio.h>
#include "function_pointers.h"

/**
  * print_name - A function that prints name using another function pointer
  * @name: The name to print
  * @f: Function pointer that print names
  *
  */

void print_name(char *name, void (*f)(char *))
{
	if (f && name)
	{
		(*f)(name);
	}
}
