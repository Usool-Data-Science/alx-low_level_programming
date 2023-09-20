#include "main.h"
/**
  * _strcmp - compare two strings
  * @s1: source
  * @s2: destination
  *
  * Return: 0 for successful exit
  */

int _strcmp(char *s1, char *s2)
{
	int dlen = 0;
	int slen = 0;
	int check = 0;
	int i;

	while (s1[dlen] != '\0')
	{
		dlen++;
	}
	while (s2[slen] != '\0')
	{
		slen++;
	}
	if (dlen == slen)
	{
		for (i = 0; i < dlen; i++)
		{
			if (s1[i] == s2[i])
			{
				check++;
			}
		}
		if (check == dlen)
		{
			return (0);
		}
	}
	if (dlen < slen)
	{
		return (-15);
	}
	else
	{
		return (15);
	}
}
