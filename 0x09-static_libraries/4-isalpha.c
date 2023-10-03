#include "main.h"
/**
  * _isalpha - A function that checks for alpha
  * @c: The variable to check
  *
  * Return: 0 for successful exit
  */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
