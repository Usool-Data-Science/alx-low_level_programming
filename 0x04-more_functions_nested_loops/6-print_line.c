#include "main.h"
/**
  * print_line - print n number of line
  * @n: number of times to print line
  *
  * Return: 0 for successful exit
  */

void print_line(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
