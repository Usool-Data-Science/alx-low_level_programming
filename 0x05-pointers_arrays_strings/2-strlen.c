#include "main.h"
/**
  * _strlen - Check the length of strings
  * @s: array under count
  * Return: 0 for successful exit
  */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	return (c);
}
