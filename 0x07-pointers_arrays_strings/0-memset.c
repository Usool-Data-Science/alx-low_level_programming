#include "main.h"
/**
  * main - Entry point for our code
  *
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
