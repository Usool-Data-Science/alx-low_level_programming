#include <stdio.h>
#include "function_pointers.h"

/**
  * int_index - A function to search for an integer
  * @array: The array with integers to search
  * @size: Size of the array
  * @cmp: The function for comparing the array element with a given integer
  * Return: -1 if size <= 0 or index of the found integer
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, comp_result;

	if (size <= 0)
	{
		return (-1);
	}

	if (cmp)
	{
		for (i = 0; i < size; i++)
		{
			comp_result = (*cmp)(array[i]);
			if (comp_result != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
