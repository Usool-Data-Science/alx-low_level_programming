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

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	else
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
