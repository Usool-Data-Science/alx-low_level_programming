#include "main.h"
/**
  * times_table  - return times table
  *
  * Return: 0 for successful exit
  */

void times_table(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			int result = i * j;

			if (result <= 9)
			{
				_putchar(result + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (result > 9 && j == 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar('$');
			}
			else
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			j++;
		}
		i++;
		_putchar('\n');
	}
}
