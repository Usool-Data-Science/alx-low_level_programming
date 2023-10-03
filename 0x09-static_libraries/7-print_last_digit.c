#include "main.h"
/**
  * print_last_digit - Entry point for our code
  *
  * @n: value to check
  * Return: 0 for successful exit
  */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	{
		n = -n;
	}
	a = n % 10;
	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');
	return (a);
}

