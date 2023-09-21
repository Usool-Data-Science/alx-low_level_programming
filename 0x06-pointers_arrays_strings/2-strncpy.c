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
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
