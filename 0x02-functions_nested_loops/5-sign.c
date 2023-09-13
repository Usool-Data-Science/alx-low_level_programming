#include "main.h"
/**
  *  print_sign- a function that check for sign
  * @n: The variable to test
  *
  * Return: 0 for successful exit
  */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
