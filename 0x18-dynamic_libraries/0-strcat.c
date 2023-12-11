#include "main.h"
/**
  * _strcat - function that concatinates strings
  * @dest: Destination
  * @src: Source
  *
  * Return: 0 for successful exit
  */

char *_strcat(char *dest, char *src)
{
	int dlen = 0;
	int slen = 0;
	int i, end, dend;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}
	dend = dlen;

	while (src[slen] != '\0')
	{
		slen++;
	}
	for (i = dend, end = dend + slen; i < end; i++)
	{
		dest[i] = *src;
		src++;
	}
	return (dest);
}
