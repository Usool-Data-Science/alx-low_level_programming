#include "main.h"
/**
  * main - Entry point for our code
  *
  * Return: 0 for successful exit
  */

char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *newstr;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	len--;

	newstr = malloc(len);
	for (i = 0; i < len; i++)
	{
		newstr[i] = str[i];
	}
	return (newstr);
}
