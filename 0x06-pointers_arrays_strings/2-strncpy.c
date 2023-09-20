#include "main.h"
/**
  * _strncpy - copy n char from src to dest
  * @dest: destination
  * @src: source
  * @n: count of char to copy from source
  *
  * Return: 0 for successful exit
  */

char *_strncpy(char *dest, char *src, int n)
{
	int slen = 0;
	int i;

	while (src[slen] != '\0')
	{
		slen++;
	}
	if (n > slen)
	{
		*dest = *src;
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}
