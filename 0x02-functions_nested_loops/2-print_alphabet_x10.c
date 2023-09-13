#include "main.h"
/**
  * main - Entry point for our code
  *
  * Return: 0 for successful exit
  */

void print_alphabet_x10(void)
{
	int i,j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
