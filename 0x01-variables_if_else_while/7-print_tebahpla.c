#include <stdio.h>
/**
  * main - prints alphabets in reverse
  *
  * Return: 0 for successful exit
  */
int main(void)
{
	char i;
	char upper = 'z';
	char lower = 'a';

	for (i = upper; i >= lower; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
