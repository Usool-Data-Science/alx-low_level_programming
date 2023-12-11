#include "main.h"
/**
  * _puts - print out strings
  * @str: a pointer to a string
  *
  * Return: 0 for successful exit
  */

void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
		_putchar(str[c]);
		c++;
	}
	_putchar('\n');
}
