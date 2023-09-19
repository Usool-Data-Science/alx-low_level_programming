#include "main.h"
/**
  * print_rev - print string in reverse
  * @s: the string to reverse
  * Return: 0 for successful exit
  */

void print_rev(char *s)
{
	int longi = 0;
	int o;

	while (*s != '\0')
	{
		longi++;
		s++;
	}
	s--;
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}

