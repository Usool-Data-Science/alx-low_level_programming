#include "main.h"
/**
  * print_last_digit - Entry point for our code
  *
  8 @n: value to check
  * Return: 0 for successful exit
  */

int print_last_digit(int n)
{
	int result = abs(n % 10);
	_putchar(result + '0');
	return (result);
}
