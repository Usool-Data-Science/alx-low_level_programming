#include "main.h"
/**
  * print_rev - print string in reverse
  * @s: the string to reverse
  * Return: 0 for successful exit
  */

void print_rev(char *s)
{
	int i;
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (i = c; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
