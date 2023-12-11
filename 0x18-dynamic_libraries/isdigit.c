#include "main.h"
/**
  * _isdigit - check if c is digit
  * @c: the variable to check
  *
  * Return: 0 for successful exit
  */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
