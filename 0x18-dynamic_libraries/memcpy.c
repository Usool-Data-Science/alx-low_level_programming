#include "main.h"
/**
  * _memcpy - copy from src to dest
  * @dest: destination
  * @src: source
  * @n: number of instances
  * Return: 0 for successful exit
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
