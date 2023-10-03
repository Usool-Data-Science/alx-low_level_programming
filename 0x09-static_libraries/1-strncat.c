#include "main.h"
/**
  * _strncat - concatinate only n bytes from src
  * @dest: destination
  * @src: source
  * @n: number of bytes
  *
  * Return: 0 for successful exit
  */

char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int slen = 0;
	int i, end;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	while (src[slen] != 0)
	{
		slen++;
	}
	if (n > slen)
	{
		end = dlen + slen;
	}
	else
	{
		end = dlen + n;
	}
	for (i = dlen; i < end; i++)
	{
		dest[i] = *src;
		src++;
	}

	return (dest);
}
