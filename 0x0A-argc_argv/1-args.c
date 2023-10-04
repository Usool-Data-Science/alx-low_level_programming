#include <stdio.h>
/**
  * main - Entry point for our code
  * @argc: argument count
  * @argv: vector of arguments
  * Return: 0 for successful exit
  */

int main(int argc, __attribute__((unused)) char *argv[])
{
	int size = argc - 1;

	printf("%d\n", size);
	return (0);
}
