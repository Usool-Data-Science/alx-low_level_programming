#include <stdio.h>
/**
  * main - A function that prints alphabets
  *
  * @start - The starting point
  * @end - The end of print
  *
  * Return: 0 for sucessful exit
  */
int main(void)
{
	int start = 97;
	int end = 122;

	for (start = 97; start <= end; start++)
	{
		printf("%c", start);
	}
	printf("\n");
	return (0);
}
