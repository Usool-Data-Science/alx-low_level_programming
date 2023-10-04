#include <stdio.h>
/**
  * main - Entry point for our code
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: 0 for successful exit
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
