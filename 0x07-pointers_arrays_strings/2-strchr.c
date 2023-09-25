#include "main.h"
/**
  * _strchr - character finder
  * @s: The string to search
  * @c: The character being searched
  * Return: 0 for successful exit
  */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (s);
}
