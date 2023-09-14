#include "main.h"
/**
  * positive_or_negative - Test if our input is zero
  * @i: the variable been tested
  *
  * Return: 0 for successful exit
  */
void positive_or_negative(int i)
{
	if (i == 0)
	{
		printf("%d is zero\n", i);
		return;
	}
	else if (i < 0)
	{
		printf("%d is negative\n", i);
		return;
	}
	else if (i > 0)
	{
		printf("%d is positive\n", i);
		return;
	}
	else
	{
		return;
	}
}
