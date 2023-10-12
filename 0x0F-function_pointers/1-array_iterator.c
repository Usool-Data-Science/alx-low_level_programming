#include <stdio.h>
#include "function_pointers.h"

/**
  * array_iterator - A function to go over each element of an array
  * @array: The proposed array to iterate over
  * @size: Size of our proposed array
  * @action: The function to execute for each element of our proposed array.
  */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (size && action && array)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
