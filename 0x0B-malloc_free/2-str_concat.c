#include "main.h"
#include <stdlib.h>
/**
  * str_concat - string concatinator
  * @s1: first string
  * @s2: second string
  * Return: 0 for successful exit
  */
char *str_concat(char *s1, char *s2)
{
	int size, i, j;
	char *S1, *S2;
	char *newstr;
	int len1 = 0, len2 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	S1 = s1, S2 = s2;
	while (*S1 != '\0')
	{
		len1++,	S1++;
	}
	while (*S2 != '\0')
	{
		len2++, S2++;
	}
	size = len1 + len2, newstr = malloc(len1 + len2 + 1);
	if (newstr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < len1; i++)
		{
			*(newstr + i) = s1[i];
		}
		for (j = i + 1; j < size; j++)
		{
			*(newstr + j) = s2[j];
		}
		*(newstr + size) = '\0';
	}
	return (newstr);
}
