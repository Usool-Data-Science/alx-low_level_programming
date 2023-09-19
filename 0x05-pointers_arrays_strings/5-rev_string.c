#include "main.h"
/**
  * rev_string - reverse any string
  * @s: the intended string
  *
  * Return: 0 for successful exit
  */
void rev_string(char *s)
{
	char rev = s[0];
	int counter = 0;
	int i;

	while (s[counter] != '\0')
	counter++;
	for (i = 0; i < counter; i++)
	{
		counter--;
		rev = s[i];
		s[i] = s[counter];
		s[counter] = rev;
	}
}
