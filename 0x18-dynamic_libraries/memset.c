#include "main.h"
/**
  * _memset - memory filler
  * @s: pointer to the string
  * @b: character to fill with
  * @n: number of time to fill
  * Return: 0 for successful exit
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
