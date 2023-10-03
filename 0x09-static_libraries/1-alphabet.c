#include "main.h"
/**
  * print_alphabet - a function that prints alphabets
  *
  * Return: 0 for successful exit
  */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
