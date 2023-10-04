#include "main.h"
#include <stdlib.h>
/**
  * create_array - An array creator and initializer
  * @size: size of our array
  * @c: character to initialize with
  *
  * Return: 0 for successful exit
  */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		str[i] = c;
	}
	return (str);
}
