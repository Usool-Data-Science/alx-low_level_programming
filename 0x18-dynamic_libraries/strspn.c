#include "main.h"
/**
  * _strspn - a comparison function
  * @s: the substring
  * @accept: compared string
  *
  * Return: 0 for successful exit
  */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int counter = 0;
	unsigned int total = 0;
	char *accp;

	while (*s != '\0')
	{
		accp = accept;
		while (*accp != '\0')
		{
			if (*s == *accp)
			{
				counter++;
				break;
			}
			accp++;
		}
		if (counter > 0)
		{
			total += counter;
		}
		else
		{
			return (total);
		}
		counter = 0;

		s++;
	}
	return (total);
}
