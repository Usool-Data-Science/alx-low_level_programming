#include "main.h"
/**
  * print_numbers - functino that prints integers
  *
  * Return: 0 for successful exit
  */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
