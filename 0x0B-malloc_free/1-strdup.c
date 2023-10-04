#include "main.h"
#include <stdlib.h>
/**
  * _strdup - string duplicator
  * @str: string to duplicate
  *
  * Return: 0 for successful exit
  */

char *_strdup(char *str)
{
	int i;
	int len = 0;
	char *str2;
	char *newstr;

	if (str = NULL)
	{
		return (NULL);
	}
	str2 = str;
	while (*str2 != '\0')
	{
		len++;
		str2++;
	}

	newstr = malloc(len + 1);
	if (newstr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len; i++)
		{
			*(newstr + i) = str[i];
		}
	}
	return (newstr);
}
