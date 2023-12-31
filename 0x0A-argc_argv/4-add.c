#include <stdio.h>

#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/**
  * isNum - Check if its a nunber
  * @str: string argument
  *
  * Return: 0 for successful exit
  */

bool isNum(char *str)
{
	while (*str != '\0')
	{
		if (isdigit(*str) == false)
		{
			return (false);
		}
		str++;
	}
	return (true);
}

/**
  * main - Entry point
  * @argc: argument counts
  * @argv: argument vector
  *
  * Return: 0 for success.
  */

int main(int argc, char *argv[])
{
	int total = 0;
	int i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isNum(argv[i]))
			{
				total += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", total);
	}
	else
	{
		printf("0\n");
	}
	return (0);
}
