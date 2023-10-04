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
	int var1 = atoi(argv[1]);
	int var2 = atoi(argv[2]);

	if (argc == 3)
	{
		mul = var1 * var2;
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
