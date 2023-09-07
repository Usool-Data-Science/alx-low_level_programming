#include <stdio.h>

/**
  * main - Prints size of data types
  *
  * Return: outputs 0 for success
  */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float f;

	printf("Size of a char: %hu byte(s)\n", (unsigned int) sizeof(c));
	printf("Size of an int: %hu byte(s)\n", (unsigned int) sizeof(i));
	printf("Size of a long int: %hu byte(s)\n", (unsigned int) sizeof(li));
	printf("Size of a long long int: %hu byte(s)\n", (unsigned int) sizeof(lli));
	printf("Size of a float: %hu byte(s)\n", (unsigned int) sizeof(f));
	return (0);
}
