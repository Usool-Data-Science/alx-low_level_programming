#include "main.h"
/**
  * print_diagonal - print n-1 spaces and one \
  *
  * @n: number of times to print diagonal
  *
  * Return: 0 for successful exit
  */

void print_diagonal(int n)
{
	int i;
	int j = 1;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
