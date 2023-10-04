#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point for our code
  * @argc: argument counts
  * @argv: vector of arguments
  *
  * Return: 0 for successful exit
  */

int main(int argc, char *argv[])
{
	int mul;

	if (argc >= 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error \n");
	}
	return (0);
}
