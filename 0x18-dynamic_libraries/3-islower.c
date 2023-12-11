#include "main.h"
/**
  * _islower - check if its lower or not
  * @c: Parameter to be checked
  * Return: 1 for lower or 0 otherwise
  */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
